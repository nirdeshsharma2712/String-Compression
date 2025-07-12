# 📊 LeetCode Problem: String Compression

## 🧩 Problem Statement

Given an array of **characters** `chars`, compress it using the following algorithm:

Begin with an empty string `s`. For each group of **consecutive** repeating **characters** in `chars`:

- If the group's length is `1`, append the **character** to `s`.
- Otherwise, append the character followed by the group's length.
The **compressed** string s should not be returned **separately**, but instead, be **stored** in the input character array `chars`. Note that group lengths that are `10` or longer will be split into multiple **characters** in `chars`.

After you are done **modifying** the input array, return the **new length** of the array.


> **Note :**
> - You must write an algorithm that uses only **constant extra space.**



## 🧠 Approach: Count & Append

- Traverse the **array** and **count** consecutive characters.

> - If count == 1 → just push the character.
> - Else → push the character + count.

- Keep updating the array  with the result.



## ✅ Example Walkthrough

### Example 1

##### Input: chars = ["a","a","b","b","c","c","c"]
##### Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]

##### Explanation: 
<pre> 
  The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".
  
</pre>

### Example 2

##### Input: chars = ["a"]
##### Output: Return 1, and the first character of the input array should be: ["a"]

##### Explanation: 
<pre> 
  The only group is "a", which remains uncompressed since it's a single character.
  
</pre>

### Example 3

##### Input: chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
##### Output: Return 4, and the first 4 characters of the input array should be: ["a","b","1","2"].

##### Explanation: 
<pre> 
  The groups are "a" and "bbbbbbbbbbbb". This compresses to "ab12".
</pre>

## 🛠️ Constraints

- `1 <= chars.length <= 2000`
- `chars[i]` is a lowercase English letter, uppercase English letter, digit, or symbol..
  
