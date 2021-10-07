# CS3560 Example Project

An example project that uses Doxygen, Makefile, Catch2, Travis CI.

This is a simple project that contains some of the tools used in the class. For example,

- .gitignore
- Git with commit message in Conventional Commits ([https://www.conventionalcommits.org/en/v1.0.0/](https://www.conventionalcommits.org/en/v1.0.0/)).
- Makefile
- Doxygen with Netlify
- Catch2
- Travis CI (The idea of integrating this into class is heavily influenced by Mr. Robert Foreman).
- maybe Google Test Framework (using Docker image)
- This repository is also used for students to practice git pull requests

## Git with commit message in Conventional Commits

Some of the commit messages in this repository are following the Conventional Commit style
([https://www.conventionalcommits.org/en/v1.0.0/](https://www.conventionalcommits.org/en/v1.0.0/)).

## Doxygen with Netlify

The `fib` example contains configuration of [Doxygen](http://www.doxygen.nl/) (`fib/Doxygfile`) and [Netlify](https://www.netlify.com/) (`netlify.toml`)
that automatically build doxygen (using `cd fib && make doc`), and publish the generated document
to [https://ou-cs3560-examples.netlify.com/](https://ou-cs3560-examples.netlify.com/).

## Helpful Links

- https://www.ohio.edu/oit/services/device/virtual-desktops
- https://github.com/OU-CS3560/examples (this page)
- ssh YOURNAME@pu1.cs.ohio.edu

## This project is also used by students to help them practice pull requests
