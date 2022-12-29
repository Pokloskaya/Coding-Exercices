const prompt = require('prompt-sync')();

var testCases = prompt(); var testCases = (Number(testCases));

var results = [];
while(testCases > 0){
    testCases = testCases - 1;

    var n1, n2, n3;
    var n1 = prompt(); var n1 = (Number(n1));
    var n2 = prompt(); var n2 = (Number(n2));
    var n3 = prompt(); var n3 = (Number(n3));

    if(n3 > n1 > n2){
        results.push(n1);
    }else if(n3 < n1 < n2){
        results.push(n1);
    }
    
    if(n3 > n2 > n1){
        results.push(n2);
    }else if(n3 < n2 < n1){
        results.push(n2);
    }

    if(n2 > n3 > n1){
        results.push(n3);
    }else if(n3 < n3 < n1){
        results.push(n3);
    }

}

for(var i = 0; i < testCases; i++){
 console.log(results[i]);
}