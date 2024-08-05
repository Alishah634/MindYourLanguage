# Practice Programming Challenges

## Overview

Switching between programming languages can be challenging due to differences in syntax and approaches to algorithms. Often, you may need a refresher to get back up to speed. Instead of spending hours googling, why not dive right in and solve a few problems in the language you're learning? This repository contains practice challenges for various languages to help you remember and refresh concepts and syntax you haven't used in a while.

## Purpose

The main goals of this repository are:

- **Learning**: Reinforce your understanding of different programming languages.
- **Problem-Solving Skills**: Improve your ability to solve algorithmic challenges.
- **Skill Assessment**: Gauge your proficiency in different languages.
- **Having Fun**: Enjoy solving problems and developing your coding skills.

## Structure

Each challenge is organized in its own folder named `ChallengeX`, where `X` is the challenge number (e.g., `Challenge1`, `Challenge2`, etc.). Inside each challenge folder, you will find:

- A source file containing the challenge code (e.g., `Challenge1.c`).
- A `sol/` folder containing:
   - A copy of the challenge source file.
   - The compiled executable of the challenge (if it exists).

Each folder `Practice_{LANGUAGE}` where `LANGUAGE` is the language being tested contains subfolders for each challenge. For example, `Practice_C` contains subfolders for challenges written in C.

## Future Plans

Currently, this repository contains challenges in C. However, more languages will be added in the future to cover a broader range of programming skills and concepts.

## Contribution

The solutions provided in the `sol/` folders may not be the most optimal. If you have a better solution or would like to contribute, please feel free to reach out. Contributions are welcome and appreciated. Contributions can be made via pull request, and will be added if they pass review.

## Notes

- The test cases for these challenges are **NOT** robust and may miss edge cases. These will be added in the future, but not soon.
- If you would like to contribute, please reach out.
- Suggestions are always welcome!

## Directory Structure

The directory structure of the project is as follows:

<pre
>MindYourLanguage/
│
├── Practice_C/
│ ├── Challenge1/
│ │ ├── Challenge1.c
│ │ └── sol/
│ │ ├── Challenge1.c
│ │ └── Challenge1
│ ├── Challenge2/
│ │ ├── Challenge2.c
│ │ └── sol/
│ │ ├── Challenge2.c
│ │ └── Challenge2
│ ├── Challenge3/
│ │ ├── Challenge3.c
│ │ └── sol/
│ │ ├── Challenge3.c
│ │ └── Challenge3
│ └── ...
└── README.md
</pre>
## Getting Started

To get started with the challenges:
### Option 1 (download the ZIP file):
1. Download the repository as a ZIP file from GitHub and extract it.
2. Navigate to the desired challenge folder:
    ```sh
    cd Practice_C/ChallengeX
    ```

3. Compile the source file (if necessary) and run the executable:
    ```sh
    gcc -o ChallengeX ChallengeX.c
    ./ChallengeX
    ```
### Option 2 (Fork the repository):
1. Fork the repository on GitHub by clicking the "Fork" button at the top-right of the repository page.
2. Clone the forked repository to your local machine:
    ```sh
    git clone <your-forked-repository-url>
    ```

3. Navigate to the desired challenge folder:
    ```sh
    cd Practice_C/ChallengeX
    ```

4. Compile the source file (if necessary) and run the executable:
    ```sh
    gcc -o ChallengeX ChallengeX.c
    ./ChallengeX
    ```

Happy coding!

