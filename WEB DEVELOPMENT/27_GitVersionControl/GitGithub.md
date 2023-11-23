## What is Git?
Popular version control system, created by Linus Torvalds in 2005, and has been maintained by Junio Hamano since then.


## Working with Git
- Initialize Git on a folder, making it a Repository.
- Git now creates a hidden folder to keep track of changes in that folder.
When a file is changed, added or deleted, it is considered modified.
- You select the modified files you want to Stage.
- The Staged files are Committed, which tells Git to store a permanent snapshot of the files.
- Git allows you to see the full history of every commit.
- You can revert back to any previous commit.
- Git does not store a separate copy of every file in every commit, but keeps track of changes made in each commit!

Download Git for free from : https://www.git-scm.com/

---
## Necessary Steps 

After downloading check on gitbash

    git --version

Config Git to let git know who you are
  
    git config --global user.name "ayush poddar"
    git config --global user.email "ayush@gmail.com"

Now make a folder 

    cd <location>
    mkdir <folderName>

Initialise Git: Turns folder into directory by creating a hidden folder

    git init

to check existing files

    ls

Let's say we add our file to that repo
to check wheter that file is part of our repo or not

    git status

Git is aware of file !!

Files in Git Repository can be in 2 states -
1. Tracked - Files which are added to repo and git knows
2. Untracked - File in working directory(folder) but not in repo

As we are working, we may be adding, editing and removing files. But whenever we finish our work, we should add the files to a Staging Environment.

Staged files are files that are ready to be committed to the repository you are working on.

To add our files to Staging Environment 

    git add <filename>

To add all files

    git add --all //or shoortcut
    git add -A

If u check git status if will add our file

Now we our done with our work let's create out first commit
Git considers each commit change point or "save point" you can go back to if you find a bug, or want to make a change.

    git commit -m "Message to add"

**We can commit directly withoud adding to staging area if changes are to small to be seen**

Not Recommended

    git commit -a -m "Message"

To view history of all commits use

    git log

**branch** : A new/separate version of the main repository.

    git branch <branchname>

To check branch

    git branch

To move from the current branch, to specified branch

    git checkout <branchname>

To merge branches first go to master branch then

    git checkout master
    git merge <branch name which to be merged>

To delete a branch

    git branch -d <branchname>