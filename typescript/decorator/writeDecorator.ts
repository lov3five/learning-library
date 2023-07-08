function LogDecorator(target: any) {
    console.log(`LogDecorator applied to class: ${target.name}`);
  }
  
  @LogDecorator
  class Car {
    run() {
      console.log('Run...');
    }

    stop() {
        console.log("Stop!");
    }
  }