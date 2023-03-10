# Jacob Hansen - Jan 2023
# Automatically generates README for GitHub repository

import os
import requests


def get_page(link):
    problem_id = link[link.rfind("/") + 1 :]
    page = requests.get("https://open.kattis.com/problems/" + problem_id)
    page_text = page.text
    title_html = page_text[page_text.find("<title>") : page_text.find("</title>")]
    title = title_html[title_html.find(">") + 1 : title_html.find("&ndash") - 1]
    difficulty_html = page_text[
        page_text.find(
            '<span><span class="difficulty_number difficulty_number-problems_table'
        ) : page_text.find(
            '<div class="metadata_list-item" data-name="metadata_item-statistics">'
        )
    ]
    difficulty = difficulty_html[
        difficulty_html.find(".") - 1 : difficulty_html.find(".") + 2
    ]
    return title, difficulty


def replace_invalid_chars(input):
    output = input.replace(" ", "%20")
    output = output.replace("?", "%3F")
    return output


def print_readme(problems):
    print("Creating README...", end="")
    name_list = sorted(problems, key=lambda k: k["title"])
    difficulty_list = sorted(problems, key=lambda k: k["difficulty"])
    f = open("README.md", "w")
    f.write("## Problem Tables:\n***\n<details><summary>Sorted by Name</summary>\n\n")
    f.write("| Problem | Difficulty | Language(s) |\n| --- | --- | --- |\n")
    for problem in name_list:
        f.write(
            f"| [{problem['title']}]({problem['link']}) | {problem['difficulty']} | "
        )
        for lang in problem["langs"]:
            f.write(f"[{lang[0]}]({lang[1]}) ")
        f.write(f"|\n")
    f.write("</details>\n\n<details><summary>Sorted by Difficulty</summary>\n\n")
    f.write("| Problem | Difficulty | Language(s) |\n| --- | --- | --- |\n")
    for problem in difficulty_list:
        f.write(
            f"| [{problem['title']}]({problem['link']}) | {problem['difficulty']} | "
        )
        for lang in problem["langs"]:
            f.write(f"[{lang[0]}]({lang[1]}) ")
        f.write(f"|\n")
    f.close()
    print("DONE!")


def reader(current_dir, verbosity):
    problems = []
    root_url = "https://github.com/JHansen2000/Kattis-Problems/blob/main/"
    cpp_dir = current_dir + "/" + "C++/"
    python_dir = current_dir + "/" + "Python/"
    if verbosity == "full":
        print("Reading C++ Directory...")
    with os.scandir(cpp_dir) as cpp_entries:
        for cpp_entry in cpp_entries:
            if verbosity == "full":
                print("\tReading " + cpp_entry.name + " [C++]")
            with os.scandir(cpp_entry.path) as folder:
                for file in folder:
                    if ".cpp" in file.name:
                        f = open(file.path, "r")
                        link = False
                        while not link:
                            line = f.readline()
                            if "https" not in line:
                                continue
                            link = line[3:-1]
                            title, difficulty = get_page(link)
                            problems.append(
                                {
                                    "title": title,
                                    "difficulty": difficulty,
                                    "link": link,
                                    "langs": [
                                        (
                                            "C++",
                                            root_url
                                            + "C%2B%2B/"
                                            + replace_invalid_chars(title)
                                            + "/"
                                            + file.name,
                                        )
                                    ],
                                }
                            )
    if verbosity == "full":
        print("Reading Python Directory...")
    # Update Code Here...
    return problems


if __name__ == "__main__":
    problems = reader(os.getcwd(), verbosity="full")
    print_readme(problems)
