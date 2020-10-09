const x=[{ id: 1 }, { id: 2 }, { id: 4 }, { id: 30 }, { id: 23 }];
const y=[{ id: 112 }, { id: 2 }, { id: 49 }, { id: 30 }, { id: 32 }];

const swap=(a, b) => { const temp=a; a=b; b=temp; };

const merge=(x, y) => {
    x=[...x, ...y];
    let values=new Set();
    x.forEach(el => values.add(el.id));
    let temp=[];
    values=[...values];
    for (let i=0; i<values.length; i++) {
        let el=values[i];
        let j=i;
        while (values[j++]<el) swap(el, values[j]);
    }
    const ans=[];
    temp.forEach(el => ans.push({ id: el }));
    console.log(ans);
};

merge(x, y);