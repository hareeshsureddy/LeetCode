
/*
void heapify(int* gifts, int giftsSize, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < giftsSize && gifts[left] > gifts[largest]) {
        largest = left;
    }

    if (right < giftsSize && gifts[right] > gifts[largest]) {
        largest = right;
    }

    if (largest != i) {
        int temp = gifts[i];
        gifts[i] = gifts[largest];
        gifts[largest] = temp;

        heapify(gifts, giftsSize, largest);
    }
}

long long pickGifts(int* gifts, int giftsSize, int k) {
    long long total = 0;
    for (int i = 0; i < giftsSize; i++) {
        total += gifts[i];
    }

    // Create a max-heap
    for (int i = giftsSize / 2 - 1; i >= 0; i--) {
        heapify(gifts, giftsSize, i);
    }

    for (int i = 0; i < k; i++) {
        // Extract the largest gift
        int largest = gifts[0];
        // Calculate the new value after taking the square root
        int new_value = (int)sqrt(largest);
        // Update the total value
        total -= (largest - new_value);
        // Replace the largest gift with the new value
        gifts[0] = new_value;
        // Heapify the max-heap again
        heapify(gifts, giftsSize, 0);
    }

    return total;
}
*/
long long pickGifts(int* gifts, int giftsSize, int k) {
    for (int i = 0; i < k; i++) {
        short largest_index = 0;
        for (int j = 1; j < giftsSize; j++) {
            largest_index =
                (gifts[largest_index] < gifts[j]) ? j : largest_index;
        }
        gifts[largest_index] = (int)sqrt(gifts[largest_index]);
    }
    long long total = 0;
    for (int i = 0; i < giftsSize; i++) {
        total += gifts[i];
    }
    return total;
}