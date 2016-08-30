///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"
#import "DBTEAMAdminTier.h"
#import "DBTEAMTeamMemberInfo.h"
#import "DBTEAMTeamMemberProfile.h"

#pragma mark - API Object

@implementation DBTEAMTeamMemberInfo 

#pragma mark - Constructors

- (instancetype)initWithProfile:(DBTEAMTeamMemberProfile *)profile role:(DBTEAMAdminTier *)role {

    self = [super init];
    if (self) {
        _profile = profile;
        _role = role;
    }
    return self;
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
    return [DBTEAMTeamMemberInfoSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBTEAMTeamMemberInfoSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
    return [[DBTEAMTeamMemberInfoSerializer serialize:self] description];
}

@end


#pragma mark - Serializer Object

@implementation DBTEAMTeamMemberInfoSerializer 

+ (NSDictionary *)serialize:(DBTEAMTeamMemberInfo *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"profile"] = [DBTEAMTeamMemberProfileSerializer serialize:valueObj.profile];
    jsonDict[@"role"] = [DBTEAMAdminTierSerializer serialize:valueObj.role];

    return jsonDict;
}

+ (DBTEAMTeamMemberInfo *)deserialize:(NSDictionary *)valueDict {
    DBTEAMTeamMemberProfile *profile = [DBTEAMTeamMemberProfileSerializer deserialize:valueDict[@"profile"]];
    DBTEAMAdminTier *role = [DBTEAMAdminTierSerializer deserialize:valueDict[@"role"]];

    return [[DBTEAMTeamMemberInfo alloc] initWithProfile:profile role:role];
}

@end