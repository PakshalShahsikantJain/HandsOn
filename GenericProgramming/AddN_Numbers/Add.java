import java.lang.*;
import java.util.*;

class Generic<T extends Number>
{
    private double sum;
    private T arr[];

    Generic(T Arr[]) 
    {
        this.arr = Arr;
        this.sum = 0;
    }

    public void Summation() 
    {
        int i = 0;

        for(i = 0;i < this.arr.length;i++)
        {
            this.sum = this.sum + this.arr[i].doubleValue();
        }

    }

    public double getSum() {
        return this.sum;
    }
}

class Add
{    
    public static void main(String args[])
    {   
        Integer[] intArr = {3,4,5,6,7};
        Float[] floatArr = {10.2f,20.4f,30.2f,40.4f};

        Generic<Integer> gobj = new Generic<Integer>(intArr);
        Generic<Float> fobj = new Generic<Float>(floatArr);

        gobj.Summation();
        System.out.println("Summation of N Numbers of data type int is :"+gobj.getSum());

        fobj.Summation();
        System.out.println("Summation of N Numbers of data type float is :"+fobj.getSum());
    }   
}