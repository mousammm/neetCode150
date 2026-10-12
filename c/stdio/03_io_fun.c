# Flushing and buffering
fflush(fp) force buffer → OS (output only; NULL = all)
setvbuf(fp, buf, mode, size) set buffering (_IONBF/_IOLBF/_IOFBF)
setbuf(fp, buf) simple version (NULL = unbuffered)

# File fun
fopen(path, mode) open → FILE*
fclose(fp) flush + close
freopen(path, mode, fp) reopen existing stream
remove(path) delete a file
rename(old, new) rename a file
tmpfile() temporary file
fileno(fp) FILE* → fd
fdopen(fd, mode) fd → FILE* 

# File seeking
fseek(fp, offset, whence) move to position
ftell(fp) current position
rewind(fp) back to start
fgetpos(fp, &pos) save position (portable)
fsetpos(fp, &pos) restore position
feof(fp) EOF flag set?
ferror(fp) error flag set?
clearerr(fp) reset both flags

# Error/status
perror(msg) print msg + system error to stderr
feof(fp) true if EOF reached
ferror(fp) true if error occurred
clearerr(fp) clear EOF/error flags
errno global error code (set on failure)
