#ifndef GLOB_H
#define GLOB_H 1

#define GLOB_NOCHECK (16)
#define GLOB_FLAGS (GLOB_NOCHECK)

typedef struct glob_t
{
    unsigned gl_pathc;
    char **gl_pathv;
} glob_t;

#ifdef __cplusplus
extern "C" {
#endif

int
glob(
    const char *pattern,
    int flags,
    void *unused,
    glob_t *pglob);

void
globfree(
    glob_t* pglob);

#ifdef __cplusplus
}
#endif

#endif /* ifndef GLOB_H */