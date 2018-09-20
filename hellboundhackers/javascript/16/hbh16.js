function Check(checksum)
{
	var tab = "                   azertyuiopqsdfghjklmwxcvbnAZERTYUIOPQSDFGHJKLMWXCVBN0123456789_$&#@";
	var entry = 'EQIyPVh_j$';
	var n = entry.length;
	var sum = 1;
	for(var i=0;i<n;i++)
	{
		var index = tab.indexOf(entry.substring(i,i+1));
		sum = sum+(index*n*i)*(index*i*i);
	}
	if(sum==checksum)
	{
		console.log(entry)
	}
	else
	{
		console.log("Wrong Pass!! Try Again.", sum);
	}	
	return false;
}

Check(88692589)