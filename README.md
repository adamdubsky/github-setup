# CS3560 Example Projects

This is an example project that uses Doxygen, Makefile, Catch2, and of course Git.

This is a simple project that contains some of the tools used in the class, including:

- .gitignore
- Git with commit message in Conventional Commits ([https://www.conventionalcommits.org/en/v1.0.0/](https://www.conventionalcommits.org/en/v1.0.0/)).
- Makefile
- Doxygen with Netlify
- Catch2
- Travis CI (to be moved to Github Actions).
- maybe Google Test Framework (using Docker image)
- This repository is also used for students to practice git pull requests
- This repository helps students practice git pull requests and to get points on quiz

## Contributions that will be welcomed

- Converting Travis CI actions (if any) to Github Actions (or just add Github Actions)
- A new simple coding project suitable for unit testing and documentation exercises (just like the fib or is_prime examples)
- Add an is_prime project with implementations in any of the languages.
- Further complete the .gitignore file for additional languages. Make sure it's well documented which extension is for what.

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
