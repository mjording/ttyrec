#ifndef __TTYREC_IO_H__
#define __TTYREC_IO_H__

#include "ttyrec.h"

int     read_header     (FILE *fp, Header *h);
int     write_header    (FILE *fp, Header *h);
void    set_progname    (const char *name);
FILE*   efopen          (const char *path, const char *mode);
int     edup            (int oldfd);
int     edup2           (int oldfd, int newfd);
FILE*   efdopen         (int fd, const char *mode);

#endif
