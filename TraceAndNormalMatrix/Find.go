package main;
import "fmt";
import "math";

func TraceOfMatrix(arr [][]int,irow int,icol int) int {
	var i int = 0;
	var j int = 0;
	var isum int = 0;

	for i = 0;i < irow;i++ {
		for j = 0;j < icol;j++ {
			if(i == j) {
				isum = isum + arr[i][j];
			} 
		}
	}

	return isum;
}

func NormalOfMatrix(arr [][]int,irow int,icol int) float64 {
	var i int = 0;
	var j int = 0;
	var isqrt float64 = 0;
	var isum int = 0;

	for i = 0;i < irow;i++ {
		for j = 0;j < icol;j++ {
			isum = isum + arr[i][j];
		}
	}

	isqrt = math.Sqrt(float64(isum));
	
	return isqrt;
}

func main() {
	var iret int = 0;
	var iret2 float64 = 0;
	var arr [][]int = nil;
	var irow int = 0;
	var icol int = 0;
	var i int = 0;
	var j int = 0;

	fmt.Println("Jay Ganesh.....");
	
	fmt.Println("Enter number of rows");
	fmt.Scan(&irow);

	fmt.Println("Enter number of cols");
	fmt.Scan(&icol);

	arr = make([][]int,irow);
	for i = 0;i < irow;i++ {
		arr[i] = make([]int,icol);
	}

	fmt.Println("Enter elements in matrix");
	for i = 0;i < irow;i++ {
		fmt.Printf("---Enter elements of %d row----\n",(i + 1))
		for j = 0;j < icol;j++ {
			fmt.Printf("Enter element no %d : ",(j + 1));
			fmt.Scan(&arr[i][j]);
		}
	}

	iret = TraceOfMatrix(arr,irow,icol);
	fmt.Printf("Trace of matrix is : %d\n",iret);

	iret2 = NormalOfMatrix(arr,irow,icol);
	fmt.Printf("Normal of matrix is : %.4f",iret2);
}