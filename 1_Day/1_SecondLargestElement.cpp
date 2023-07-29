class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	   int firstLargest=INT_MIN;
	   
	   for(int i=0;i<n;i++){
	       if(arr[i]>firstLargest){
	           firstLargest=arr[i];
	       }
	   }
	   
	   int secondLargest=-1;
	   for(int i=0;i<n;i++){
	       if(arr[i]>secondLargest && arr[i]<firstLargest){
	           secondLargest=arr[i];
	       }
	   }
	   return secondLargest;
	}
};