# Jacob Hansen - Jan 2023
# Automatically tests README for GitHub repository

import os
import requests
from readme_creator import reader


def verify():
    verification = input(
        "WARNING: This module will return errors for any uncommitted problems.\n         Would you like to continue? (Y/N): "
    )
    if verification.lower() != "y":
        exit()


def test():
    print("Preparing...")
    problems = reader(os.getcwd(), verbosity="none")
    error_counter = 0
    print("Testing README links...")
    for problem in problems:
        problem["title"] = problem["title"].replace("&#039;", "'")
        prob_link_result = requests.get(problem["link"])
        if prob_link_result.status_code != 200:
            error_counter += 1
            print(
                f"-!- An error occurred accessing the problem link for {problem['title']} - {prob_link_result.status_code}"
            )
        for lang in problem["langs"]:
            lang_link_result = requests.get(lang[1].replace("&#039;", "'"))
            if lang_link_result.status_code != 200:
                error_counter += 1
                print(
                    f"-!- An error occurred accessing the repository for {problem['title']} [{lang[0]}] - {lang_link_result.status_code}"
                )
                print(f"\t{lang[1]}")
    print(f"Testing completed with {error_counter} errors")


if __name__ == "__main__":
    verify()
    test()
