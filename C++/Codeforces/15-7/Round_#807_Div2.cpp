#include <iostream>
using namespace std;
#define swap(a ,b) {int t = a; a = b; b = t;}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int left = low;
    int right = high - 1;
    while(true){
        while(left <= right && arr[left] < pivot) left++;
        while(right >= left && arr[right] > pivot) right--;
        if (left >= right) break;
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    swap(arr[left], arr[high]);
    return left;
}
 
/* Hàm thực hiện giải thuật quick sort */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi là chỉ số nơi phần tử này đã đứng đúng vị trí
         và là phần tử chia mảng làm 2 mảng con trái & phải */
        int pi = partition(arr, low, high);
 
        // Gọi đệ quy sắp xếp 2 mảng con trái và phải
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void solving(int arr[], int n, int x) {
    int i;
    quickSort(arr, 0, 2*n - 1);
    for(i = 0; i < n; i++) {
        if(arr[i+n] - arr[i] < x) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}
int main() {
    int test, i, j;
    int arr[100][200];
    int n[100], x[100];
    cin >> test;
    for(i = 0; i < test; i++) { 
        cin >> n[i];
        cin >> x[i];
        for(j = 0; j < 2*n[i]; j++) 
            cin >> arr[i][j];
    }
    for(i = 0; i < test; i++) {
        solving(arr[i], n[i], x[i]);
        putchar('\n');
    }    
    return 0;
}