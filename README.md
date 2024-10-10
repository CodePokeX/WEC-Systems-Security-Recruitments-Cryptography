This is the submission repository for Cryptography section of the Systems & Security SIG recruitments for Web Enthusiasts' Club, NITK.

## Level-1
Let me tell you about Julius Caesar. He started using Caesar cipher, one of the simplest and most widely known encryption techniques. It is a type of substitution cipher in which each letter in the plaintext is replaced by a letter some fixed number of positions down the alphabet.

The password is
YZH(878GBC 8BFC87 8C7999 F8AFB ADA8GG 8GGCC7 A7F9EG 8BFDAB)
But, is it though ?
XYG(767FAB 7AEB76 7B6888 E7ZEA ZCZ7FF 7FFBB6 Z6E8DF 7AECZA)

### Solution:

From the text it is evident that Ceaser's Cipher has been used for encryption, however the key isn't known. It is seen that the encrypted text is a mixture of alphabets and numbers. Thus a purely Alphabetical (the classical) Ceaser's Cipher will not work here. Thus I created a custom key from 'A-Z,0-9' as the dictionary to refer.
So I ran a decryption code with all possible keys from 1 to 36 (total length of customized dictionary string). This gives all possible decryptions.

![image](https://github.com/user-attachments/assets/d49bd291-e053-4f95-be92-5ce4a879f762)

After going through all the possible decrypted messages, the message RSA(101945 148510 150222 81384 363199 199550 308279 148634) made a lot of sense. Since RSA is a well known cipher in the world of security which encrypts numbers based of keys. Since the content inside the brackets were purely numerical and not a mixture of numbers and alphabets unlike other possible decryptions, this made the most sense as the password for level2.

On trying it, the zip file opened for stage2.zip.
Therefore the first password is : **RSA(101945 148510 150222 81384 363199 199550 308279 148634)**

![image](https://github.com/user-attachments/assets/165bc5b9-88a6-4e55-a9e8-740581f3cab2)

## Level-2
This is stage 2.
Info on encrypter's public key:
n = 421649
e = 17

Remember if you are stuck somewhere "Web.Club" will help you.

### Solution

From the text and the previous password it is evident we have to use RSA cipher. The public key n and the exponent is given. It is also implied from the previous answer that the RSA encrypted message is : **101945 148510 150222 81384 363199 199550 308279 148634**

On calculating the private key and decoding the decrypted message we get: **9135 5700 6382 9648 7286 4198 1686 3054**

![image](https://github.com/user-attachments/assets/a3c961e2-b85f-4ff7-80f8-418e62d00ccf)

The password for level2 is: **9135 5700 6382 9648 7286 4198 1686 3054**

## Level-3
We had to open a password protected pdf. The only clue given was a C file containing the containing an encryption code. One of the main problem that arises is what could be the encrypted message to decrypt which could possibly be th password of the pdf file.

### Solution
After careful analysis of the encryption C file given we can observe that the encrypted message gives an integer array as an output also another important fact that the number of elements in the integer array will be the same as the number of characters in the * *key* * used for encryption. Another important observation is that each element in the array will be less than 10000.
The only integer array with each element less than 10000 which we currently have is: 9135 5700 6382 9648 7286 4198 1686 3054
The number of elements in this array is 8. Also earlier in Level 2 there was a unique line at the end of the clue stating : "* *Remember if you are stuck somewhere "Web.Club" will help you.* *"
This was not used earlier and on careful observation "Web.Club" has 8 characters. Thus if we use "Web.Club" as the key for the encryption and run a suitable decryption algorithm on : 9135 5700 6382 9648 7286 4198 1686 3054 we get :

**iAmGr@@t**
![image](https://github.com/user-attachments/assets/53173366-4b18-4aaa-900f-8e8ad36104a1)

Thus the password for level 3 is: iAmGr@@t
