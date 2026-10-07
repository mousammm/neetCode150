/*
 * Valid Anagram : Leetcode 242
 * Given 2 string s and t, return true
 * if t is an anagram of s and false otherwise
 *
 * BruteForce:
 *  cat tac
 *  .at ta.
 *  ..t t..
 *  ... ...
 *  At the end we would have 2 empty string
 *  TC: O(N^2)
 *  SC: O(1)
 *
 * Mid:
 *  sorting
 *
 * Optimal Sol:
 *  array or hashmap
 *  TC: O(N)
 *  SC: O(1)
 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isAnagram(char* s, char* t)
{
  int lenS = strlen(s);
  int lenT = strlen(t);

  if(lenS != lenT) return false;

  int count[26] = {0};

  for(int i = 0; i < lenS; i++) {
    count[s[i] - 'a']++;
    count[t[i] - 'a']--;
  }

  for(int i = 0; i < 26; i++) {
    if (count[i] != 0) return false;
  }

  return true;
}

int main()
{
  char s[] = "anagram", t[] = "nagaram";
  printf("Test: %s\n", isAnagram(s, t) ? "true" : "false");

  return 0;
}
