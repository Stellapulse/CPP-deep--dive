
---

#  `notes.md` — handwritten-style reasoning

```md
# Raw Notes — My Thought Process

Declaration vs Definition:
- declaration -> Declare but do not define it (don't provide storage)
- definition means "declare and give it memory”
- C++ allows many declarations but storage only once
- extern does not allocate memory

Examples in double:
extern double pi = 3.1416 is a definition
double pi = 3 is an error because storage already exists

Const Objects:
- why const globals are file-local? compiler treats them like internal linkage
- to expose to other files → extern const
- const cannot be modified

Reference Rules:
- must bind to an existing object
- cannot bind to reference type
- cannot bind to literal like 10
- gives direct access to memory
- once bound → forever bound (as long as object exists)

Const Reference:
- used for read-only binding
- avoids copy
- allows binding to literal and temporary

Compiler transformation case:
double to const int reference triggers a temp int
compiler manufactures it secretly
non-const reference forbidden because it would modify temp not original

Still to explore:
- ODR
- linkage types
- rvalues and value categories
- move semantics
