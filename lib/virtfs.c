/*
 * Copyright (c) 2016 Feng Shuo <steve.shuo.feng@gmail.com>
 * This file is part of VirtFS.
 *
 * This file is licensed to you under your choice of the GNU Lesser
 * General Public License, version 3 or any later version (LGPLv3 or
 * later), or the GNU General Public License, version 2 (GPLv2), in
 * all cases as published by the Free Software Foundation.
 */

#include <virtfs.h>
#include <errno.h>

int virtfs_setup(int argc, char *argv[])
{
        return 0;
}

void virtfs_clean()
{
        return;
}

vfd_t virtfs_openuri(const char *uri, int flags, ...)
{
        errno = ENOTSUP;
        return NULL;
}

int virtfs_close(vfd_t vfd)
{
        errno = ENOTSUP;
        return -1;
}

int virtfs_fd_to_posix(vfd_t vfd)
{
        errno = ENOTSUP;
        return -1;
}

vfd_t virtfs_fd_from_posix(int fd)
{
        errno = ENOTSUP;
        return NULL;
}

int virtfs_ftruncate(vfd_t vfd, off_t length)
{
        errno = ENOTSUP;
        return -1;
}
int virtfs_fstat(vfd_t vfd, struct stat *buf)
{
        errno = ENOTSUP;
        return -1;
}

int virtfs_read(vfd_t vfd, void *buf, size_t count)
{
        errno = ENOTSUP;
        return -1;
}

int virtfs_write(vfd_t vfd, const void *buf, size_t count)
{
        errno = ENOTSUP;
        return -1;
}

int virtfs_lseek(vfd_t vfd, off_t offset, int whence)
{
        errno = ENOTSUP;
        return -1;
}
