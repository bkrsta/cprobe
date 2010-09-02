function k(dub, br, N){
  if(dub == 0){
    print(br);
    return;
  }
  for(var i=1; i<=N; i++){
    k(dub-1, br*10+i, N);
  }
}
