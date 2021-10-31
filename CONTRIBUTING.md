# Contributing to class repository

## Overview

This repository is the collection of examples that are used in Ohio University's CS3560 class. For a complete example of a toy project please see `fib/`.
For Makefile related examples, please see `make.example\d+`. For focus examples on unittesting for various languages, please see `unittesting.examples`.

## Contributing

### Required reading list

For students in CS3560, here are the required readings.

- [Forking Workflow](https://www.atlassian.com/git/tutorials/comparing-workflows/forking-workflow)
- [Git Feature Branch Workflow](https://www.atlassian.com/git/tutorials/comparing-workflows/feature-branch-workflow)

### Forking the repository

The first thing that you will notice is that you cannot make any push to the repository directly. This is usually the case for all open-source projects.
What you have to do is fork the repository to your own GitHub account. With this new repository, you will have full control over the
repository including the ability to push commits. To do this click on the fork button in the top right.

### Adding a new remote that refers to the original repository

We will now refer to the OU-CS3560/examples repository as upstream repository, and the forked one will be referred to as origin. To
be able to get new commits from the upstream repository, you can add a new remote

```console
$ git remote add upstream https://github.com/OU-CS3560/examples.git
```

where `upstream` is the name of the new remote and the URL is pointing to the upstream repository. If you run `git remote -v`,
there should now be four lines of names and URLs. Two of the URLs are for `origin`, and the other two are for `upstream`.

To get new commits from upstream repository, you can run

```console
$ git fetch upstream
```

This will only retrieve new commits from the upstream repository. It will not make any update to your local repository. To
actually update your local repository, you can run

```console
$ git merge upstream/master
```

This will merge `master` branch on `upstream` onto current branch on the local repository. You can then push this new commits
to your remote repository (the `origin` on GitHub.com).

### Create a new branch

From last section, you can see that new changes will be merged to master, so it is recommended to create a new branch for anything that you want to work on, and leave master untouched. Otherwise, the next time that you are updating your fork, there
will be too many merge conflicts to solve.

At this point you should notice that one branch can only create one pull request, so if you want to work on multiple pull
request, you will need multiple branches.

### Create a pull request

After you finish part or all of the work, this when the pull request comes in. To be able to create one, you will need to "compare across fork"
and select a branch from your repository.

For HW10, TA will then go over your pull request. If the TA requests some changes to your pull request, you can create
more commits that address the issues. When you push these new commits to your forked, GitHub should update pull request
automatically.

### Troubleshooting

#### Already made a commit on master branch

And this commit should not be included in the repository.

What you can do is to

1. Create a new branch at your latest commit on master branch.
2. On master branch run `git reset --hard <commit-id>`. For HW10 of Fall 2021-2022, you can replace the
   `commit-id>` with `ae4b482b6eba0d7083fef272f3c3e6eaa335b2c1`. For other cases, replace `<commit-id>` with
   an appropriate one.
3. Retrieve and merge new commits to your forked master branch (as described earlier).

## Technological stack

Currently, the only CI/CD system that is used is netlify. It is used to deploy doxygen documentation to https://ou-cs3560-examples.netlify.app/.

Primary build system used is GNU Make. In some cases (unittesting.examples)
a build system for the language is used

## Labels and their meanings

**Standard Labels:**
- These are standard labels that can be commonly used in repositories to help identify what the pull request or issue needs
- breaking - Introduces a breaking change.
- good first issue - Indicates a good first issue for first-time contributors.
- help - Indicates that the maintainer wants help in an issue or pull request.

**Effort Labels:**
- The label effort:<number> indicates the relative effort needed to complete this pull request or issue.
- These labels use a scale of Fibonacci numbers from 1 to 13.
- Examples: effort: 1, effort: 13, effort: 8

**Priority Labels:**
- These labels let the users know how urgent these issues or pull requests are, giving them a time frame of when they need to be resolved
- These labels start with 'priority' then are followed by the time frame.
- Examples: priority: now, priority: 2day, priority: soon

**State Labels:**
- These labels describe the decision state of the issue or pull request.
- Examples: state: approved, state: blocked, state: inactive, state: pending
  - state: approved - this means that it is approved to proceed
  - state: blocked - this means that something is blocking this action from happening
  - state: inactive - this means no action is needed or possible, the issue is either fixed or addressed better in other issues
  - state: pending - this means that the action is being done but a few things need to happen first

**Type Labels:**
- This label describes the type of issue or pull request it is. It is structured this way type:<what type it is>.
- Examples: type: bug, type: fix, type: feature, etc...
  - type: bug - this means that something isn't working
  - type: chore - this means that reorganization of the folder structure and other necessary tasks need to be done, but they don't impact the code much.
  - type: docs - this means that something related to documentation or information needs addressed
  - type: discussion - this means that there are questions, proposals, and other information that requires discussion
  - type: feature - this means that there is a brand new functionality, features, pages, workflows, endpoints, etc..
  - type: fix - this means there is are iterations on an existing feature/s or infrastructure
  - type: security - this means that something is vulnerable or not secure
  - type: testing - this means that this thing is related to the testing process

**Work Labels:**
- These Labels describe the kind of work involved in resolving the issue using Cynefin framework.
 Cynefin framework is a framework used in decision making, it offers different domains to help managers to characterize situations and make sense of behavior.
- Examples : work: complex, work: obvious
  - work: chaotic - this means the situation is chaotic and that novel practices were used
  - work: complex - this means that the situation is complex and that emergent practices were used
  - work: obvious - this means that the situation at hand is obvious and that the best practices were used
  - work: complicated - this means that the situation at hand is complicated and good practices were used

**Other Labels:**
- These labels don't use a prefix just like the standard labels.
  - semantic-release - this uses the commit messages to determine the type of changes in the codebase, it automatically determines the nest semantic version number and generates a changelog and publishes the release.
  - greenkeeper - this gives real-time automated dependency updates for npm and GitHub
