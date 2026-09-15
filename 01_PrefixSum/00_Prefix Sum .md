# Prefix Sum

## 1. Definition

**Prefix Sum** is a technique used to preprocess an array so that the sum of elements from the beginning of the array up to any position can be obtained efficiently.

Given:

```text
arr = [a1, a2, a3, ..., an]
```

We construct:

```text
prefix[i] = a1 + a2 + ... + ai
```

Usually:

```cpp
prefix[i] = prefix[i - 1] + arr[i];
```

After preprocessing, the sum of any range `[l, r]` can be calculated in `O(1)`:

```cpp
sum(l, r) = prefix[r] - prefix[l - 1];
```

### Complexity

- Preprocessing: `O(n)`
- Range Sum Query: `O(1)`
- Multiple range queries: `O(n + q)`

---

# 2. Direct Application — Range Sum Queries

The most direct application of Prefix Sum is answering many range-sum queries efficiently.

Suppose:

```text
arr = [2, 5, 1, 7, 3]
```

Prefix Sum:

```text
prefix = [2, 7, 8, 15, 18]
```

To calculate:

```text
sum(2, 4)
```

instead of:

```text
5 + 1 + 7
```

we use:

```text
prefix[4] - prefix[1]
= 15 - 2
= 13
```

Therefore:

```cpp
sum(l, r) = prefix[r] - prefix[l - 1];
```

---

