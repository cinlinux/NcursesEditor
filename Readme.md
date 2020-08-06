#### text editor

That project based on ncursec and system calls for file read and write. 
And buffered file read and write.

Ncurses get some troubles: open(2) returns file descriptor == 0.
Then in is catLike editor.

catLike [-i  <read filename>] [-o|> < write filename>]

#### Need to use:
- [x] open(fd...) ; write(); lseek(); seccur(); sync(); readv(); writev();
- [ ] fopen(); fileno(); fread(); fwrite(); fflush(); fseek(); rewind(); setvbuf();
- [ ] override system calls SIGTERM etc.
