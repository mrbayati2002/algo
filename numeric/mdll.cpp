c o n s t   l o n g   l o n g   m d   =   @ @ H E R E @ @ ;  
  
 i n l i n e   v o i d   a d d ( l o n g   l o n g   & a ,   l o n g   l o n g   b )   {  
     a   + =   b ;  
     i f   ( a   > =   m d )   a   - =   m d ;  
 }  
  
 i n l i n e   v o i d   s u b ( l o n g   l o n g   & a ,   l o n g   l o n g   b )   {  
     a   - =   b ;  
     i f   ( a   <   0 )   a   + =   m d ;  
 }  
  
 / *  
 l o n g   l o n g   m u l (   l o n g   l o n g   a ,   l o n g   l o n g   b ,   l o n g   l o n g   m   )   {  
     l o n g   l o n g   q   =   ( l o n g   l o n g ) ( ( l o n g   d o u b l e ) a   *   ( l o n g   d o u b l e ) b   /   ( l o n g   d o u b l e ) m ) ;  
     l o n g   l o n g   r   =   a   *   b   -   q   *   m ;  
     r e t u r n   ( r   +   5   *   m )   %   m ;  
 }  
 * /  
  
 i n l i n e   l o n g   l o n g   m u l ( l o n g   l o n g   a ,   l o n g   l o n g   b )   {  
     / /   t r y   w i t h   l o n g   d o u b l e   o r   i n   O ( l o g   b ) ?  
     r e t u r n   ( _ _ i n t 1 2 8 )   a   *   b   %   m d ;  
 }  
  
 i n l i n e   l o n g   l o n g   p o w e r ( l o n g   l o n g   a ,   l o n g   l o n g   b )   {  
     l o n g   l o n g   r e s   =   1 ;  
     w h i l e   ( b   >   0 )   {  
         i f   ( b   &   1 )   {  
             r e s   =   m u l ( r e s ,   a ) ;  
         }  
         a   =   m u l ( a ,   a ) ;  
         b   > > =   1 ;  
     }  
     r e t u r n   r e s ;  
 }  
  
 i n l i n e   l o n g   l o n g   i n v ( l o n g   l o n g   a )   {  
     a   % =   m d ;  
     i f   ( a   <   0 )   a   + =   m d ;  
     l o n g   l o n g   b   =   m d ,   u   =   0 ,   v   =   1 ;  
     w h i l e   ( a )   {  
         l o n g   l o n g   t   =   b   /   a ;  
         b   - =   t   *   a ;   s w a p ( a ,   b ) ;  
         u   - =   t   *   v ;   s w a p ( u ,   v ) ;  
     }  
     a s s e r t ( b   = =   1 ) ;  
     i f   ( u   <   0 )   u   + =   m d ;  
     r e t u r n   u ;  
 } 