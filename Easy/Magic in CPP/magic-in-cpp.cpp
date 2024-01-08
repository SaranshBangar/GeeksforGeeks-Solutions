//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

// Function prototype
void swap(int*, int*);
void swap(int&, int&);


// } Driver Code Ends
//User function Template for C++

// Function to swap A and B
// using pointers
void swap(int *A, int *B)
{
    int temp=*A;
    *A=*B;
    *B=temp;
}

// Function to swap A and B
// using reference
void swap(int &A, int &B)
{
    int temp=A;
    A=B;
    B=temp;
}


//{ Driver Code Starts.

// Driver code
int main() {
	
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    int A, B;
	    cin >> A >> B;
	    
	    // Swapping by reference
	    swap(A, B);
	    cout << A << " " << B << endl;
	    
	    // Swap by pointers
	    swap(&A, &B);
	    
	    cout << A << " " << B << endl;
	}
	
	return 0;
}
// } Driver Code Ends