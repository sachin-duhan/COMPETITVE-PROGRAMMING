// Given a url string and query parameters as an object, creaate a function that returns a well formed URL.
// Example: url: http://www.abc.com, queryParams: {foo: 234, bar:567, xyz:76}
// output: 

// http://www.abc.com?foo=234&bar=657&xyz=76

function return_URL(base_url, query_params) {
    let final_URL = `${base_url}?`;
    let key_values = Object.keys(query_params);
    key_values.forEach(el => final_URL += `${el}=${query_params[el]}&`);
    return final_URL;
}

console.log(return_URL("http://www.abc.com", {
    foo: 234,
    bar: 567,
    xyz: 76
}));