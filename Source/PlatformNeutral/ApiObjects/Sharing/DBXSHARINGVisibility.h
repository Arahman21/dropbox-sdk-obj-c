///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGVisibility;

/// 
/// The `DBXSHARINGVisibility` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Who can access a shared link. The most open visibility is public. The
/// default depends on many aspects, such as team and user preferences and
/// shared folder settings.
/// 
@interface DBXSHARINGVisibility : NSObject <DBXSerializable> 

/// The `DBXSHARINGVisibilityTag` enum type represents the possible tag states
/// that the `DBXSHARINGVisibility` union can exist in.
typedef NS_ENUM(NSInteger, DBXSHARINGVisibilityTag) {
    /// Anyone who has received the link can access it. No login required.
    DBXSHARINGVisibilityPublic,

    /// Only members of the same team can access the link. Login is required.
    DBXSHARINGVisibilityTeamOnly,

    /// A link-specific password is required to access the link. Login is not
    /// required.
    DBXSHARINGVisibilityPassword,

    /// Only members of the same team who have the link-specific password can
    /// access the link.
    DBXSHARINGVisibilityTeamAndPassword,

    /// Only members of the shared folder containing the linked file can access
    /// the link. Login is required.
    DBXSHARINGVisibilitySharedFolderOnly,

    /// (no description).
    DBXSHARINGVisibilityOther,

};

/// Represents the union's current tag state.
@property (nonatomic) DBXSHARINGVisibilityTag tag;

/// Initializes union class with tag state of `Public`.
- (nonnull instancetype)initWithPublic;

/// Initializes union class with tag state of `TeamOnly`.
- (nonnull instancetype)initWithTeamOnly;

/// Initializes union class with tag state of `Password`.
- (nonnull instancetype)initWithPassword;

/// Initializes union class with tag state of `TeamAndPassword`.
- (nonnull instancetype)initWithTeamAndPassword;

/// Initializes union class with tag state of `SharedFolderOnly`.
- (nonnull instancetype)initWithSharedFolderOnly;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `Public`.
- (BOOL)isPublic;

/// Returns whether the union's current tag state has value `TeamOnly`.
- (BOOL)isTeamOnly;

/// Returns whether the union's current tag state has value `Password`.
- (BOOL)isPassword;

/// Returns whether the union's current tag state has value `TeamAndPassword`.
- (BOOL)isTeamAndPassword;

/// Returns whether the union's current tag state has value `SharedFolderOnly`.
- (BOOL)isSharedFolderOnly;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the `DBXSHARINGVisibility`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXSHARINGVisibility` union.
/// 
@interface DBXSHARINGVisibilitySerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGVisibility` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGVisibility * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGVisibility` object from a
/// json-compatible dictionary representation.
+ (DBXSHARINGVisibility * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end