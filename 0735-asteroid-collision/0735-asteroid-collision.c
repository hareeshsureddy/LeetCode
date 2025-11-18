/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
/*
 int* asteroidCollision(int* asteroids, int asteroidsSize, int* returnSize) {

 }
*/
int* asteroidCollision(int* asteroids, int asteroidsSize, int* returnSize) {
   int top = 0;
   for (int i = 1; i < asteroidsSize; i++) {
       if (asteroids[i] < 0 && top>=0 && asteroids[top]>0) {
           if (asteroids[top] > abs(asteroids[i])) {
               continue;
           } else if (asteroids[top] == abs(asteroids[i])) {
               top--;
           } else {
               while (top >= 0 && asteroids[top]>0 && (asteroids[top]) < abs(asteroids[i])){
                   top--;
               }
               if (top >= 0) {
                   if (asteroids[top] < abs(asteroids[i]))
                       asteroids[++top] = asteroids[i];
                       else if(abs(asteroids[top]) == abs(asteroids[i]))
                       top--;
               } else {
                   asteroids[++top] = asteroids[i];
               }
           }
       } else {
           asteroids[++top] = asteroids[i];
       }
   }
   *returnSize = top + 1;
   return asteroids;
}

