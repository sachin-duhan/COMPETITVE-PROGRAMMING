var cluster = require('cluster');
console.log('playing with clustering');
if(cluster.isMaster)
	cluster.fork();
if(cluster.isMaster) console.log('print by master');
else{
	if(cluster.isWorker)console.log('worker here');
	else cluster.fork();
	console.log(`${cluster.id} is still ${cluster.isConnected}`);
}
cluster.disconnect();
if(cluster.exitAfterDisconnected)console.log('end');
