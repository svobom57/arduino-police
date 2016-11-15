// Support

int getSpeedForDirection(bool direction, int speed){
  if(direction == MOVE_FRONT){
    return (255-speed)*-1;
  }
  return speed;
}

void setMotorsPolatiryForDirection(int direction){
  if(direction){
    digitalWrite(M_RIGHT_DIR, HIGH);
    digitalWrite(M_LEFT_DIR, HIGH);
  }else{
    digitalWrite(M_RIGHT_DIR, LOW);
    digitalWrite(M_LEFT_DIR, LOW);
  }
}

// Moving

void goStraight(int speed) {
  setMotorsPolatiryForDirection(MOVE_FRONT);
  analogWrite(M_RIGHT_SPEED, getSpeedForDirection(MOVE_FRONT, speed));
  analogWrite(M_LEFT_SPEED, getSpeedForDirection(MOVE_FRONT, speed));
}

void goBackwards(int speed){
  setMotorsPolatiryForDirection(MOVE_BACK);
  analogWrite(M_RIGHT_SPEED, getSpeedForDirection(MOVE_BACK, speed));
  analogWrite(M_LEFT_SPEED, getSpeedForDirection(MOVE_BACK, speed));
}

void turnRight(bool direction){
  setMotorsPolatiryForDirection(direction);
  analogWrite(M_RIGHT_SPEED, getSpeedForDirection(direction, LOW_SPEED));
  analogWrite(M_LEFT_SPEED, getSpeedForDirection(direction, MID_SPEED));
  
}

void turnLeft(bool direction){
  setMotorsPolatiryForDirection(direction);
  analogWrite(M_RIGHT_SPEED, getSpeedForDirection(direction, MID_SPEED));
  analogWrite(M_LEFT_SPEED, getSpeedForDirection(direction, LOW_SPEED));
  
}


