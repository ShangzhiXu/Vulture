    int     (*close)(struct file *);
    int     (*closedir)(struct dir *);
    void *d_data;
    struct dirent d_dent;
    struct mount_point *d_mp; /* can get private mount data here */
    off_t d_offset;
    void *f_data;
    UINT32 f_flags;
    struct file_ops *f_fops;
    struct mount_point *f_mp; /* can get private mount data here */
    off_t f_offset;
    UINT32 f_owner;           /* the task that openned this file */
    UINT32 f_status;
    struct file_ops *fs_fops;
    const char fs_name[LOS_FS_MAX_NAME_LEN];
    struct file_system *fs_next;
    volatile uint32_t fs_refs;
    int     (*ioctl)(struct file *, int, unsigned long);
    off_t   (*lseek)(struct file *, off_t, int);
    void *m_data;             /* used by fs private data for this mount point (like /sdb1, /sdb2), */
    struct file_system *m_fs;
    UINT32 m_mutex;
    struct mount_point *m_next;
    const char *m_path;
    volatile uint32_t m_refs;
    int     (*mkdir)(struct mount_point *, const char *);
    char name[LOS_MAX_DIR_NAME_LEN + 1];
    int     (*open)(struct file *, const char *, int);
    int     (*opendir)(struct dir *, const char *);
    ssize_t (*read)(struct file *, char *, size_t);
    int     (*readdir)(struct dir *, struct dirent *);
    int     (*rename)(struct mount_point *, const char *, const char *);
    UINT32 size;
    int     (*stat)(struct mount_point *, const char *, struct stat *);
    int     (*sync)(struct file *);
    UINT32 type;
    int     (*unlink)(struct mount_point *, const char *);
    ssize_t (*write)(struct file *, const char *, size_t);
