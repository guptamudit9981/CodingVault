# Coding Vault

My personal collection of coding problems, solutions (C++) and notes.
Built to stay organized and searchable up to 1000+ problems.

---

## Folder Structure

```
coding-vault/
├── README.md              <- this file (rules + master index)
├── _template/
│   ├── notes.md           <- copy this for every new problem
│   └── solution.cpp
├── arrays/
├── strings/
├── recursion/
├── pointers/
├── math/
├── loops-patterns/
├── sorting-searching/
├── contests/
│   └── contest-01/
└── misc/
```

Each problem lives in its own folder inside a topic folder:

```
arrays/0042-two-sum/
├── notes.md
└── solution.cpp
```

### Rules

1. **Number every problem** with 4 digits: `0001`, `0002`, ... The number is global and never reused, even across topics.
2. **Folder name** = `number-short-title`, lowercase, hyphens, no spaces. Example: `0042-two-sum`.
3. **One problem = one folder** with exactly `notes.md` and `solution.cpp`. If a second approach exists, name it `solution-2.cpp`.
4. **Pick one topic** for the folder. Put extra topics in `tags` inside `notes.md`.
5. **Split a topic folder** into sub-folders once it passes about 50-80 problems (e.g. `arrays/two-pointer/`).
6. Always fill the header (front matter) in `notes.md`. Searching depends on it.

---

## notes.md Template

```markdown
---
id: 0042
title: Two Sum
topic: arrays
difficulty: easy
tags: [array, hashing, two-pointer]
source: LeetCode
status: solved
date: 2026-10-30
---

## Problem
(paste the statement)

## Approach
(your idea in 3-5 lines)

## Complexity
Time: O(n)  Space: O(n)

## Mistakes / things to remember
- ...
```

### Allowed values

| Field        | Values                                              |
|--------------|-----------------------------------------------------|
| `difficulty` | `easy`, `medium`, `hard`                            |
| `status`     | `solved`, `revisit`, `stuck`, `optimized`           |
| `source`     | `LeetCode`, `Codeforces`, `CodeChef`, `HackerRank`, `College`, `Contest`, `Self` |
| `topic`      | must match a top-level folder name                  |

Keep tags lowercase and reuse the same words (`hashing`, not sometimes `hash` and sometimes `hashmap`).

### Standard tag list (add new ones only when needed)

`array`, `string`, `recursion`, `pointer`, `math`, `loop`, `pattern`, `sorting`, `searching`, `two-pointer`, `hashing`, `simulation`, `brute-force`, `greedy`, `implementation`

---

## How to Find Things

| I want to find...                  | Do this                                              |
|------------------------------------|------------------------------------------------------|
| A problem by number or name        | VS Code `Ctrl+P`, type `0042` or `two-sum`           |
| All problems with a tag            | `Ctrl+Shift+F`, search `tags:.*hashing`              |
| My revision list                   | `Ctrl+Shift+F`, search `status: revisit`             |
| All hard problems                  | `Ctrl+Shift+F`, search `difficulty: hard`            |
| Any code idea or keyword           | `Ctrl+Shift+F`, search the word (searches code + notes) |
| Anything from phone / other device | Use GitHub's search box on the repo                  |

---

## Workflow for Each New Problem (about 10 seconds)

1. Copy the `_template` folder into the right topic folder and rename it (`0043-reverse-string`).
2. Fill the header in `notes.md`, write the approach, paste the problem.
3. Put your code in `solution.cpp`.
4. Add one row to the index table below.
5. Commit and push:

```
git add .
git commit -m "0043 reverse-string"
git push
```

---

## Progress

| Topic | Solved | Revisit |
|-------|--------|---------|
| arrays | 0 | 0 |
| strings | 0 | 0 |
| recursion | 0 | 0 |
| pointers | 0 | 0 |
| math | 0 | 0 |
| loops-patterns | 0 | 0 |
| sorting-searching | 0 | 0 |
| contests | 0 | 0 |
| misc | 0 | 0 |
| **Total** | **0** | **0** |

---

## Master Index

Keep newest at the bottom. One line per problem.

| ID   | Title | Topic | Difficulty | Status | Link |
|------|-------|-------|------------|--------|------|
| 0001 | (example) Sum of two numbers | math | easy | solved | [open](math/0001-sum-of-two-numbers/notes.md) |

---

## Revision Plan

- Every Sunday: search `status: revisit` and redo 3-5 of them without looking at the solution.
- When a revisit problem is solved cleanly, change its status to `solved`.
- When you find a better approach, add `solution-2.cpp` and change status to `optimized`.