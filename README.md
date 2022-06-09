# push_swap
 #### Final Score [125/100](https://github.com/ldusty/push_swap/blob/main/pass.pdf)
 Sorting stack a, using stack b. The butterfly algorithm was used.
 Details in [subject](https://github.com/ldusty/push_swap/blob/main/en.subject.pdf).
 All files must pass the [norminette](https://github.com/42School/norminette) check.
 ## Usage
 ```make```         - to compile mandatory part  
 ```make bonus```   - to compile bonus part  
 ```make clean```   - to remove objects  
 ```make fclean```  - to remove objects and binary files  
 ```make re```   - to re-compile
 ## Visualize push_swap
 To see push_swap work in action, first run ```make``` and then the following script:  
 ```python3 pyviz.py `ruby -e "puts (1..n).to_a.shuffle.join(' ')"```, ```where n = number of elements```  
