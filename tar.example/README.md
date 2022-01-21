## To copy a few source code files over to experiement with the following commands:

```
$ cp ../fib/*.cc .
$ cp ../fib/*.h .
```

## Create an archive

```console
$ tar cvf archive.tar *.md *.cc *.h
```
* c - means creating an archive
* v - means "verbose" mode, printing out the filenames as the files are processed
* f - means the next command line parameter is the name of the archive file.

To zip archive while creating it

```console
$ tar czvf archive.tar.gz *.md *.cc *.h
```
* z - means using compression.

To zip archive after creating it without `z` option.

```console
$ gzip archive.tar
```

## List table of content

```console
$ tar tvf archive.tar
```

## Extract

```console
$ tar xvf archive.tar

```

