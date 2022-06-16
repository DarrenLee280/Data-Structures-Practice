# Sorting/Searching

## Binary Search
<p> Given a sorted array, binary search starts with the middle element and determines if the element x is less than or greater than the middle element.</p>
<p> If element x is less than the middle element repeat for the lower half of the array. </p>
<p> If element x is greater than the middle element repeat for the upper half of the array. </p>

### example

<p> Given array [10, 20, 30, 50, 60, 80, 110, 130, 140, 170] find 50 </p>
<ol>
    <li> First find middle element: 60
        <ul> 
            <li>[10, 20, 30, 50, <em><strong>60</strong></em>, 80, 110, 130, 140, 170] <-</li>
        </ul>
    </li>
    <li> Compare and see that 50 is less than 60 </li>
    <li> Find the middle of the bottom half of the array: 30 </li>
        <ul> 
            <li>[10, 20, <em><strong>30</strong></em>, 50, 60, 80, 110, 130, 140, 170] <-</li>
        </ul>
    </li>
    <li> Compare and see that 50 is greater than 30 </li>
        <li> Find the middle of the top half of the array: 50 </li>
        <ul> 
            <li>[10, 20, 30, <em><strong>50</strong></em>, 60, 80, 110, 130, 140, 170] <-</li>
        </ul>
    </li>
    <li> Compare and see that 50 is equal to 50 and return the index! </li>
</ol>
