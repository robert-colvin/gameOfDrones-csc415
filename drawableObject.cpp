#include "drawableObject.h"

void DrawableObject::draw(){
	for(int x=0; x<model.size(); x++){
		model[x].draw();
	}
}
void DrawableObject::update(){

}

std::vector<Polygon3d> DrawableObject::getBoundingBox(){
	return this->boundingBox;
}

bool DrawableObject::collidesWith(const DrawableObject&){
	
}

bool DrawableObject::collidesWith(const Vector){
	return false;
}

bool DrawableObject::collisionPoint(const Vector){

}
