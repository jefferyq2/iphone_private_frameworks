/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "ML3Predicate.h"

@class NSArray, NSString;

@interface ML3SearchStringPredicate : ML3Predicate {
@private
	NSArray* _properties;
	NSString* _searchString;
}
@property(copy, nonatomic) NSArray* properties;
@property(copy, nonatomic) NSString* searchString;
+(id)predicateWithConcatenatedProperties:(id)concatenatedProperties searchString:(id)string;
-(id)initWithConcatenatedProperties:(id)concatenatedProperties searchString:(id)string;
-(void)dealloc;
-(id)description;
-(id)SQLJoinClausesForClass:(Class)aClass;
-(id)SQLForEntityClass:(Class)entityClass;
-(void)bindToSqlite3Statement:(sqlite3_stmt*)sqlite3Statement bindingIndex:(inout int*)index;
@end

