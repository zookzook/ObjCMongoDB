//
//  Mongo_Helper.h
//  ObjCMongoDB
//
//  Created by Paul Melnikow on 3/10/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

#define set_error_and_return_NO   do { if (error) *error = [self error]; return NO; } while(0)