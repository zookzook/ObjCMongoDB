//
//  Mongo_PrivateInterfaces.h
//  ObjCMongoDB
//
//  Copyright 2013 Paul Melnikow and other contributors
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//


//
// This file is imported internally by classes in the framework to interact with each other. Avoid using it
// in your application. Use the classes' public interfaces instead.
//

#import "BSON_PrivateInterfaces.h"
#import "MongoConnection.h"
#import "MongoFindRequest.h"
#import "MongoUpdateRequest.h"
#import "MongoPredicate.h"

@interface MongoConnection (Project)
- (mongo *) connValue;
@end

@interface MongoFindRequest (Project)
- (BSONDocument *) fieldsDocument;
- (BSONDocument *) queryDocument;
- (int) options;
- (OrderedDictionary *) queryDictionaryValue;
@end

@interface MongoUpdateRequest (Project)
- (BSONDocument *) conditionDocumentValue;
- (BSONDocument *) operationDocumentValue;
- (int) flags;
- (OrderedDictionary *) conditionDictionaryValue;
@end

@interface MongoPredicate (Project)
@property (retain) OrderedDictionary *dictionary;
@end