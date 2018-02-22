#import "SWGLoginModel.h"

@implementation SWGLoginModel

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"_id": @"id", @"userNicename": @"user_nicename", @"avatar": @"avatar", @"sex": @"sex", @"signature": @"signature", @"userStatus": @"user_status", @"token": @"token" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"_id", @"userNicename", @"avatar", @"sex", @"signature", @"userStatus", @"token"];
  return [optionalProperties containsObject:propertyName];
}

@end
