# Variables

- C provides several data types 
  - int     **(integers)**   
    - Range can be -32768 to +32767 **(16 Bits ints)** This depends on the machine you are developing your **c code**.  
  - float   **(nums with fractional parts)**
    - Float number is typically a 32-bit quantity with atleast 6 significant digits and magnitude generally between **10<sup>-38</sup>** and **10<sup>38</sup>**
  - char    **(character)**
    - size is single **byte**
  - short   **(short integers)**
  - long    **(long integers)**
  - double  **(double precision floating point)**
- **printf**("%**3d**\t%**6d**", fahr, celsius)
  - Above printf specifies fahr to be 3 digits wide and celsius to be 6 digits wide.
- **SYMBOLIC CONSTANTS**
  - The quantities **LOWER**, **UPPER** and **STEP** are symbolic constants inside **(main_symbolic_constants.c)** file, are **not variables**, so they do not appear in declarations.