# Declarations, Definitions, Const, and References — Quick Revision Guide

Goal: sharpen fundamentals that decide memory, storage, linkage, and reference rules.
This is interview-grade C++ knowledge — companies expect clarity here.

## 🧱 Declaration vs Definition
• A declaration introduces a name.  
• A definition allocates storage.

```cpp
int i;        // declaration + definition
extern int i; // declaration only (no storage)
