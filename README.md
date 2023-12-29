# AlgoAlly-batch01

This repository is intended for the purpose of adding all the questions and solutions for all the problems covered during the first batch of AlgoAlly starting from January 2024. NOTE: all branches will be created by individual students and these branches will have to be created from the main branch only.

## Instructions

### First Time Setup

1. **Clone the repository (only for the first time):**
   - Click on the "Code" button in the GitHub repository.
   - Copy the HTTPS or SSH URL.
   - Open your terminal and navigate to the directory where you want to clone the repository.
   - Run the following command:
     ```bash
     git clone https://github.com/yourusername/AlgoAlly.git
     cd AlgoAlly
     ```

2. **Create your own personal branch from the main branch:**
   - In the main repository directory, run the following command:
     ```bash
     git checkout -b your-branch-name
     ```

3. **Verify that you are on your branch:**
   - Run the following command:
     ```bash
     git branch
     ```

### During Class

1. **Code along with the instructor:**
   - Navigate to the appropriate sub-directory based on the topic covered in class.

2. **After Class - Submit Your Code:**
   - Ensure you are on your branch:
     ```bash
     git checkout your-branch-name
     ```

   - Add your changed files:
     ```bash
     git add .
     ```

   - Commit your changes with a valid message:
     ```bash
     git commit -m "Week 1: Topic Name"
     ```

   - Push your changes to your branch:
     ```bash
     git push origin your-branch-name
     ```

3. **Create a pull request on GitHub:**
   - Visit the repository on GitHub.
   - Click on "New Pull Request."
   - Set your branch as the "compare" branch.
   - Provide a title for your pull request, such as "Your Name: Week 1."
   - Submit the pull request.

### Subsequent Classes

1. **Before the next class:**
   - Switch to the main branch:
     ```bash
     git checkout main
     ```

   - Update your local main branch:
     ```bash
     git pull
     ```

   - Switch back to your branch:
     ```bash
     git checkout your-branch-name
     ```

   - Merge changes from main into your branch:
     ```bash
     git merge main
     ```

2. **Start your class and code along with the instructor.**

3. **After the class - Submit Your Code (follow the same steps as above).**

Happy coding!

