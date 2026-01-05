## Singleton – Key Points

1. **Static kya hai**
   Static member class ka hota hai, object ka nahi.  
   Isliye poore program me sirf **ek hi copy** exist karti hai.

2. **Pointer kyun banaya**
   Pointer se object **tab banaya ja sakta hai jab zarurat ho**.  
   Direct object banane se program start pe hi ban jaata.

3. **Singleton kya hota hai**
   Design pattern jisme **sirf ek hi object** banne diya jaata hai  
   aur sab jagah wahi object use hota hai.

4. **Null pointer initialize kyun kiya**
   `nullptr` se pata chalta hai ki object **abhi bana hi nahi hai**.  
   First call pe hi `new` karke object banaya jaata hai.

5. **Infinite loop kyun nahi hoga**
   Static members constructor se nahi bante.  
   Constructor sirf `new Logger()` pe **ek baar** chalta hai.


--

# in-English

--
## Singleton Pattern – Key Concepts Explained

1. **What is `static`**
   A static member belongs to the class, not to individual objects.  
   This ensures that only **one shared copy** of the variable exists throughout the program.

2. **Why a pointer is used**
   A pointer allows the object to be created **only when it is needed**.  
   If a direct object were used, it would be created at program startup, removing control over its lifecycle.

3. **What is a Singleton**
   A Singleton is a design pattern that ensures **only one instance** of a class is created and that the same instance is accessible globally.

4. **Why the pointer is initialized to `nullptr`**
   Initializing the pointer to `nullptr` indicates that the object has **not yet been created**.  
   This makes it possible to create the object lazily during the first call to `getInstance()`.

5. **Why there is no infinite loop**
   Static members are not created by constructors.  
   The constructor runs **only once**, when `new Logger()` is called, and does not recreate the static pointer, preventing recursion or infinite loops.
