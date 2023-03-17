
# Data Structures and Algorithms

Welcome to DSA Repo! This repository is dedicated to Data Structures and Algorithms. The purpose of this repository is to help beginners learn and practice DSA.


## Contribution Guidelines

We welcome contributions from anyone who is interested in DSA. If you are new to Github and open-source, please read [Github's guide to making your first contribution](https://github.com/firstcontributions/first-contributions).


## How to contribute

- Fork this repository
- Clone the forked repository to your local machine
- Create a new branch with a descriptive name for your contribution
- Make your changes and commit them with a descriptive commit message
- Push your changes to your forked repository
- Create a pull request to the main repository

## What to contribute

We welcome any contributions that are related to Data Structures and Algorithms. Here are some ideas to get started:

- Implement a new data structure
- Implement an algorithm
- Write a new blog post about DSA
- Improve existing code/documentation
- Fix a bug

## Licensing

This project is licensed under the [MIT license](https://opensource.org/license/mit/).

## Maintainers
This repository is maintained by:
- [Vishesh Rawal](https://github.com/visheshrwl)



<!-- ## Acknowledgements
 We would like to thank the following contributors:



Thank you for your contributions! -->






# Time Complexities:- 

## What are Time Complexities?
The Amount of Time taken by an algorithm to run(as a function of length of the input).


## Why?????

1-> For Making better Programs <br>
2-> Comparison of algorithm <br>


Algo A -> High Processing -> Slow Machine <br>
Algo B -> Low Processing  -> Fast Machine <br>

Therefore we use time Complexities. <br>

There are 3 ways to show the time complexities-> <br>

## 1) Big O Notations -> Upper Bound
## 2) Theta Notations -> For Avg-case Complexity
## 3) Omega Notations -> Lower Bound

# Remember

## Constant Time -> O(1)
## Linear Time -> O(n)
## Logarithmic Time -> O(logn)
## Quadratic Time -> O(n^2)
## Cubic Time -> O(n^3)

<br>
<br>
Let's say having a function like <br>

    for(i = 0; i < 10 ; i++){
        cout << "Hello";                -->  O(1)
    }

In the above code as there's no variable in the code or it can be said that it's fixed therefore it's O(1) complexity





Let's say having a function like 

    for(i = 0; i < n ; i++){
        cout << "Hello";                -->  O(n)
    }

** In the above code as n depends on input provided by the user in the code or it can be said that it's variable therefore it's O(n) complexity

    Binary Search -> O(logn)

    for(......){
        for(.....){
                                    --> O(n^2)
        }
    }

    for(......){
        for(.....){
            for(....){
                                    --> O(n^3)
            }
        }
    }

# Order of Decreasing Complexity


O(N!)           <br>
O(2^n)          <br>
O(N^3)          <br>
O(N^2)          <br>
O(NlogN)        <br>
O(N)            <br>
O(logN)         <br>
O(1)            <br>

## Questions!!!!!

f(n) -> 2n^2 + 3n       -> O(n^2) <br>
f(n) -> 4n^4 + 3n^3     -> O(n^4) <br>
f(n) -> N^2 + logN      -> O(N^2) <br>
f(n) -> 12001           -> O(1) <br>
f(n) -> 3n^3 + 2n^2 + 5 -> O(n^3) <br>
f(n) -> n^3/300         -> O(n^3) <br>
f(n) -> 5n^2 + logn     -> O(n^2) <br>
f(n) -> n/4             -> O(n) <br>
f(n) -> n+4/4             -> O(n) <br>


## Question 1
    for(...) {
        ...             -> O(n)
    }                                 -> O(n+m)
    for(...) {
        ...             -> O(m)
    }

    //
    for(..){           -> O(n)
        for(...){      -> O(m)
            ...                        ->O(m X n)
        }
    }


## Question 2
    int a= 0, b = 0;

    for(i = 0; i< N; i++) {
        for(j = 0; j < N; j++){   -> O(n^2)
            a = a + j;
        }                                   -> O(n^2)
    }
    for(k = 0; k < N; k++){       -> O(n)
        b = b + k;
    }



## Question 3
    int a =0;
    for(i=0; i<N; i++) {
        for(j=N;j>i; j--){
            a = a + i + j;          -> O(n^2)
        }
    }

10^8 operation rule -> Most of the modern machine can perform 10^8 operation/second

## If Input  |   Time Complexity <br>
<br>
<=[10__11]   |  O(n!)           <br>
<=[15__18]   |  O(2^n * n^2)    <br>
<=100        |  O(n^4)          <br>
<=400        |  O(n^3)          <br>
<=2000       |  O(n^2 * logn)   <br>
<=10^4       |  O(n^2)          <br>
<=10^6       |  O(n logn)       <br>
<br>
<=10^8       |  O(n) , O(log n) <br>


# Space Complexity
Memory as a function of length of the input <br>
## Question 1
What is the time, space complexity of the following code:

    int a = 0, b = 0;
    for(int i = 0; i < n; i++){
        a = a + rand();
    }                               ->O(1)
    for(int j = 0; j<m; j++) {
        b = b + rand();
    }
Assume that rand() is O(1) time , O(1) space function. <br>

        int a, b; -> O(1) space;


## Question 2

        func(){
            int arr[5] = {1,2,3,4,5};
            .................
        }






















