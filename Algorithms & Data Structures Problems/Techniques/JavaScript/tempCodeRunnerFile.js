let arr = [2,2,3,4,5,3,4,2,1,4,5,6];
const map = new Map();

for(let i=0; i<arr.length; i++){
    let num = arr[i];
    if(map.has(num)){
        map.set(num, map.get(num) + 1);
    } else {
        map.set(num, 1);
    }
}
const sortedArr = Array.from(map).sort((a,b) => a[1] - b[1]);
console.log(sortedArr);