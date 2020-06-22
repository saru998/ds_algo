process.stdin.resume();
process.stdin.setEncoding('utf-8');

var input_ = "";

process.stdin.on('data', function (data) {
    input_ += data.toString().trim();
    input_ += '\n';
});

function solve(X, K) {
    // Write your code here

}

process.stdin.on('end', function () {
    input_ = input_.replace(/\n$/, "");
    input_ = input_.split("\n");
    var N = parseInt(input_.shift(), 10);
    var X = input_.shift().split(' ').map(function(el) {
    	return parseInt(el, 10);});
    var K = parseInt(input_.shift(), 10);

    var out_ = solve( X,  K);
    process.stdout.write(out_);

    process.exit();

});