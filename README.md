# CS3560 Examples 

"Fib" - an example project for tool use.
=======
"Fib" is an example project that uses Doxygen, Makefile, Catch2, and of course Git.

This is a simple project that contains some of the tools used in the class, including:

- .gitignore
- Git with commit message in Conventional Commits ([https://www.conventionalcommits.org/en/v1.0.0/](https://www.conventionalcommits.org/en/v1.0.0/)).
- Makefile
- Doxygen with Netlify
- Catch2
- Travis CI (to be moved to Github Actions).
- maybe Google Test Framework (using Docker image)

## Contributions are welcome

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

- https://mydesktop.ohio.edu
- https://www.ohio.edu/oit/services/device/virtual-desktops
- https://github.com/OU-CS3560/examples (this page)
- https://www.youtube.com/watch?v=nT8KGYVurIU (Info on Forking & Pull Requests)
- ssh YOURNAME@pu1.cs.ohio.edu (Stocker Center 3rd Floor Linux Computers. Stocker 307, 18 computers)
- (restricted access) tensor.internal.vital.kchusap.com
- [Spring 2022 Irvine 199 Teams meeting link](https://teams.microsoft.com/l/meetup-join/19%3ameeting_NjcxMWQ1YzAtOWJjMC00NWFjLTgxYjktYmFlNDFlOTA4ZTg1%40thread.v2/0?context=%7b%22Tid%22%3a%22f3308007-477c-4a70-8889-34611817c55a%22%2c%22Oid%22%3a%221d143496-ae16-4394-beaa-37aa1d46b225%22%7d)
