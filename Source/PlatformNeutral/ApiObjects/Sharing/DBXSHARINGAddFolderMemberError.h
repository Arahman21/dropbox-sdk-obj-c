///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGAddFolderMemberError;
@class DBXSHARINGAddMemberSelectorError;
@class DBXSHARINGSharedFolderAccessError;

/// 
/// The `DBXSHARINGAddFolderMemberError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGAddFolderMemberError : NSObject <DBXSerializable> 

/// The `DBXSHARINGAddFolderMemberErrorTag` enum type represents the possible
/// tag states that the `DBXSHARINGAddFolderMemberError` union can exist in.
typedef NS_ENUM(NSInteger, DBXSHARINGAddFolderMemberErrorTag) {
    /// Unable to access shared folder.
    DBXSHARINGAddFolderMemberErrorAccessError,

    /// The current user's e-mail address is unverified.
    DBXSHARINGAddFolderMemberErrorEmailUnverified,

    /// members in AddFolderMemberArg contains a bad invitation recipient.
    DBXSHARINGAddFolderMemberErrorBadMember,

    /// Your team policy does not allow sharing outside of the team.
    DBXSHARINGAddFolderMemberErrorCantShareOutsideTeam,

    /// The value is the member limit that was reached.
    DBXSHARINGAddFolderMemberErrorTooManyMembers,

    /// The value is the pending invite limit that was reached.
    DBXSHARINGAddFolderMemberErrorTooManyPendingInvites,

    /// The current user has hit the limit of invites they can send per day. Try
    /// again in 24 hours.
    DBXSHARINGAddFolderMemberErrorRateLimit,

    /// The current user is trying to share with too many people at once.
    DBXSHARINGAddFolderMemberErrorTooManyInvitees,

    /// The current user's account doesn't support this action. An example of
    /// this is when adding a read-only member. This action can only be
    /// performed by users that have upgraded to a Pro or Business plan.
    DBXSHARINGAddFolderMemberErrorInsufficientPlan,

    /// This action cannot be performed on a team shared folder.
    DBXSHARINGAddFolderMemberErrorTeamFolder,

    /// The current user does not have permission to perform this action.
    DBXSHARINGAddFolderMemberErrorNoPermission,

    /// (no description).
    DBXSHARINGAddFolderMemberErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic) DBXSHARINGAddFolderMemberErrorTag tag;

/// Unable to access shared folder.
@property (nonatomic) DBXSHARINGSharedFolderAccessError * _Nonnull accessError;

/// members in AddFolderMemberArg contains a bad invitation recipient.
@property (nonatomic) DBXSHARINGAddMemberSelectorError * _Nonnull badMember;

/// The value is the member limit that was reached.
@property (nonatomic, copy) NSNumber * _Nonnull tooManyMembers;

/// The value is the pending invite limit that was reached.
@property (nonatomic, copy) NSNumber * _Nonnull tooManyPendingInvites;

/// Initializes union class with tag state of `AccessError`.
- (nonnull instancetype)initWithAccessError:(DBXSHARINGSharedFolderAccessError * _Nonnull)accessError;

/// Initializes union class with tag state of `EmailUnverified`.
- (nonnull instancetype)initWithEmailUnverified;

/// Initializes union class with tag state of `BadMember`.
- (nonnull instancetype)initWithBadMember:(DBXSHARINGAddMemberSelectorError * _Nonnull)badMember;

/// Initializes union class with tag state of `CantShareOutsideTeam`.
- (nonnull instancetype)initWithCantShareOutsideTeam;

/// Initializes union class with tag state of `TooManyMembers`.
- (nonnull instancetype)initWithTooManyMembers:(NSNumber * _Nonnull)tooManyMembers;

/// Initializes union class with tag state of `TooManyPendingInvites`.
- (nonnull instancetype)initWithTooManyPendingInvites:(NSNumber * _Nonnull)tooManyPendingInvites;

/// Initializes union class with tag state of `RateLimit`.
- (nonnull instancetype)initWithRateLimit;

/// Initializes union class with tag state of `TooManyInvitees`.
- (nonnull instancetype)initWithTooManyInvitees;

/// Initializes union class with tag state of `InsufficientPlan`.
- (nonnull instancetype)initWithInsufficientPlan;

/// Initializes union class with tag state of `TeamFolder`.
- (nonnull instancetype)initWithTeamFolder;

/// Initializes union class with tag state of `NoPermission`.
- (nonnull instancetype)initWithNoPermission;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `AccessError`.
- (BOOL)isAccessError;

/// Returns whether the union's current tag state has value `EmailUnverified`.
- (BOOL)isEmailUnverified;

/// Returns whether the union's current tag state has value `BadMember`.
- (BOOL)isBadMember;

/// Returns whether the union's current tag state has value
/// `CantShareOutsideTeam`.
- (BOOL)isCantShareOutsideTeam;

/// Returns whether the union's current tag state has value `TooManyMembers`.
- (BOOL)isTooManyMembers;

/// Returns whether the union's current tag state has value
/// `TooManyPendingInvites`.
- (BOOL)isTooManyPendingInvites;

/// Returns whether the union's current tag state has value `RateLimit`.
- (BOOL)isRateLimit;

/// Returns whether the union's current tag state has value `TooManyInvitees`.
- (BOOL)isTooManyInvitees;

/// Returns whether the union's current tag state has value `InsufficientPlan`.
- (BOOL)isInsufficientPlan;

/// Returns whether the union's current tag state has value `TeamFolder`.
- (BOOL)isTeamFolder;

/// Returns whether the union's current tag state has value `NoPermission`.
- (BOOL)isNoPermission;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DBXSHARINGAddFolderMemberError` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXSHARINGAddFolderMemberError` union.
/// 
@interface DBXSHARINGAddFolderMemberErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGAddFolderMemberError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGAddFolderMemberError * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGAddFolderMemberError` object from
/// a json-compatible dictionary representation.
+ (DBXSHARINGAddFolderMemberError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end