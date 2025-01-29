#pragma once
#include <Geode/Geode.hpp>

struct checkpoint_data {
    bool m_wasTeleported;
    bool m_fixGravityBug;
    bool m_reverseSync;
    double m_yVelocityBeforeSlope;
    double m_dashX;
    double m_dashY;
    double m_dashAngle;
    double m_dashStartTime;
    double m_slopeStartTime;
    bool m_justPlacedStreak;
    GameObject* m_maybeLastGroundObject;
    int m_lastCollisionBottom;
    int m_lastCollisionTop;
    int m_lastCollisionLeft;
    int m_lastCollisionRight;
    int m_unk50C;
    int m_unk510;
    GameObject* m_currentSlope2;
    GameObject* m_preLastGroundObject;
    float m_slopeAngle;
    bool m_slopeSlidingMaybeRotated;
    bool m_quickCheckpointMode;
    GameObject* m_collidedObject;
    GameObject* m_lastGroundObject;
    GameObject* m_collidingWithLeft;
    GameObject* m_collidingWithRight;
    int m_maybeSavedPlayerFrame;
    double m_scaleXRelated2;
    double m_groundYVelocity;
    double m_yVelocityRelated;
    double m_scaleXRelated3;
    double m_scaleXRelated4;
    double m_scaleXRelated5;
    bool m_isCollidingWithSlope;
    bool m_isBallRotating;
    bool m_unk669;
    GameObject* m_currentSlope3;
    GameObject* m_currentSlope;
    double unk_584;
    int m_collidingWithSlopeId;
    bool m_slopeFlipGravityRelated;
    float m_slopeAngleRadians;
    gd::unordered_map<int, GJPointDouble> m_rotateObjectsRelated;
    gd::unordered_map<int, GameObject*> m_maybeRotatedObjectsMap;
    float m_rotation;
    float m_rotationSpeed;
    float m_rotateSpeed;
    bool m_isRotating;
    bool m_isBallRotating2;
    bool m_hasGlow;
    bool m_isHidden;
    GhostType m_ghostType;
    cocos2d::CCMotionStreak* m_shipStreak;
    double m_speedMultiplier;
    double m_yStart;
    double m_gravity;
    float m_trailingParticleLife;
    float m_unk648;
    double m_gameModeChangedTime;
    bool m_padRingRelated;
    bool m_maybeReducedEffects;
    bool m_maybeIsFalling;
    bool m_shouldTryPlacingCheckpoint;
    bool m_playEffects;
    bool m_maybeCanRunIntoBlocks;
    bool m_hasGroundParticles;
    bool m_hasShipParticles;
    bool m_isOnGround3;
    bool m_checkpointTimeout;
    double m_lastCheckpointTime;
    double m_lastJumpTime;
    double m_lastFlipTime;
    double m_flashTime;
    float m_flashRelated;
    float m_flashRelated1;
    cocos2d::ccColor3B m_colorRelated2;
    cocos2d::ccColor3B m_flashRelated3;
    double m_lastSpiderFlipTime;
    bool m_unkBool5;
    bool m_maybeIsVehicleGlowing;
    bool m_gv0096;
    bool m_gv0100;
    double m_accelerationOrSpeed;
    double m_snapDistance;
    bool m_ringJumpRelated;
    gd::unordered_set<int> m_ringRelatedSet;
    GameObject* m_objectSnappedTo;
    CheckpointObject* m_pendingCheckpoint;
    int m_onFlyCheckpointTries;
    bool m_maybeSpriteRelated;
    bool m_useLandParticles0;
    float m_landParticlesAngle;
    float m_landParticleRelatedY;
    int m_playerStreak;
    float m_streakRelated1;
    bool m_streakRelated2;
    bool m_streakRelated3;
    ShipStreak m_shipStreakType;
    double m_slopeRotation;
    double m_currentSlopeYVelocity;
    double m_unk3d0;
    double m_blackOrbRelated;
    bool m_unk3e0;
    bool m_unk3e1;
    bool m_isAccelerating;
    bool m_isCurrentSlopeTop;
    double m_collidedTopMinY;
    double m_collidedBottomMaxY;
    double m_collidedLeftMaxX;
    double m_collidedRightMinX;
    bool m_streakRelated4;
    // bool m_canPlaceCheckpoint;
    cocos2d::ccColor3B m_colorRelated;
    cocos2d::ccColor3B m_secondColorRelated;
    bool m_hasCustomGlowColor;
    cocos2d::ccColor3B m_glowColor;
    bool m_maybeIsColliding;
    // bool m_jumpBuffered;
    bool m_stateRingJump;
    bool m_wasJumpBuffered;
    bool m_wasRobotJump;
    unsigned char m_stateJumpBuffered;
    bool m_stateRingJump2;
    bool m_touchedRing;
    bool m_touchedCustomRing;
    bool m_touchedGravityPortal;
    bool m_maybeTouchedBreakableBlock;
    geode::SeedValueRSV m_jumpRelatedAC2;
    bool m_touchedPad;
    double m_yVelocity;
    double m_fallSpeed;
    bool m_isOnSlope;
    bool m_wasOnSlope;
    float m_slopeVelocity;
    bool m_maybeUpsideDownSlope;
    bool m_isShip;
    bool m_isBird;
    bool m_isBall;
    bool m_isDart;
    bool m_isRobot;
    bool m_isSpider;
    bool m_isUpsideDown;
    bool m_isDead;
    bool m_isOnGround;
    bool m_isGoingLeft;
    bool m_isSideways;
    bool m_isSwing;
    int m_reverseRelated;
    double m_maybeReverseSpeed;
    double m_maybeReverseAcceleration;
    float m_xVelocityRelated2;
    // bool m_isDashing;
    int m_unk9e8;
    int m_groundObjectMaterial;
    float m_vehicleSize;
    float m_playerSpeed;
    cocos2d::CCPoint m_shipRotation;
    cocos2d::CCPoint m_lastPortalPos;
    float m_unkUnused3;
    bool m_isOnGround2;
    double m_lastLandTime;
    float m_platformerVelocityRelated;
    bool m_maybeIsBoosted;
    double m_scaleXRelatedTime;
    bool m_decreaseBoostSlide;
    bool m_unkA29;
    bool m_isLocked;
    bool m_controlsDisabled;
    cocos2d::CCPoint m_lastGroundedPos;
    std::vector<cocos2d::CCObject*> m_touchingRings;
    gd::unordered_set<int> m_touchedRings;
    GameObject* m_lastActivatedPortal;
    bool m_hasEverJumped;
    bool m_ringOrStreakRelated;
    cocos2d::ccColor3B m_playerColor1;
    cocos2d::ccColor3B m_playerColor2;
    cocos2d::CCPoint m_position;
    bool m_isSecondPlayer;
    bool m_unkA99;
    double m_totalTime;
    bool m_isBeingSpawnedByDualPortal;
    float m_unkAAC;
    float m_unkAngle1;
    float m_yVelocityRelated3;
    bool m_gamevar0060;
    bool m_swapColors;
    bool m_gamevar0062;
    int m_followRelated;
    gd::vector<float> m_playerFollowFloats;
    float m_unk838;
    int m_stateOnGround;
    unsigned char m_stateUnk;
    unsigned char m_stateNoStickX;
    unsigned char m_stateNoStickY;
    unsigned char m_stateUnk2;
    int m_stateBoostX;
    int m_stateBoostY;
    int m_maybeStateForce2;
    int m_stateScale;
    double m_platformerXVelocity;
    bool m_holdingRight;
    bool m_holdingLeft;
    bool m_leftPressedFirst;
    double m_scaleXRelated;
    bool m_maybeHasStopped;
    float m_xVelocityRelated;
    bool m_maybeGoingCorrectSlopeDirection;
    bool m_isSliding;
    double m_maybeSlopeForce;
    bool m_isOnIce;
    double m_physDeltaRelated;
    bool m_isOnGround4;
    int m_maybeSlidingTime;
    double m_maybeSlidingStartTime;
    double m_changedDirectionsTime;
    double m_slopeEndTime;
    bool m_isMoving;
    bool m_platformerMovingLeft;
    bool m_platformerMovingRight;
    bool m_isSlidingRight;
    double m_maybeChangedDirectionAngle;
    double m_unkUnused2;
    bool m_isPlatformer;
    int m_stateNoAutoJump;
    int m_stateDartSlide;
    int m_stateHitHead;
    int m_stateFlipGravity;
    float m_gravityMod;
    int m_stateForce;
    cocos2d::CCPoint m_stateForceVector;
    bool m_affectedByForces;
    gd::map<int, bool> m_jumpPadRelated;
    float m_somethingPlayerSpeedTime;
    float m_playerSpeedAC;
    bool m_fixRobotJump;
    gd::map<int, bool> m_holdingButtons;
    bool m_inputsLocked;
    gd::string m_currentRobotAnimation;
    bool m_gv0123;
    int m_iconRequestID;
    int m_unkUnused;
    bool m_isOutOfBounds;
    float m_fallStartY;
    bool m_disablePlayerSqueeze;
    bool m_robotHasRun3;
    bool m_robotHasRun2;
    bool m_item20;
    bool m_ignoreDamage;
    bool m_enable22Changes;
};

static checkpoint_data create_checkpoint(PlayerObject* player) {
    checkpoint_data result;
    result.m_wasTeleported = player->m_wasTeleported;
    result.m_fixGravityBug = player->m_fixGravityBug;
    result.m_reverseSync = player->m_reverseSync;
    result.m_yVelocityBeforeSlope = player->m_yVelocityBeforeSlope;
    result.m_dashX = player->m_dashX;
    result.m_dashY = player->m_dashY;
    result.m_dashAngle = player->m_dashAngle;
    result.m_dashStartTime = player->m_dashStartTime;
    result.m_slopeStartTime = player->m_slopeStartTime;
    result.m_justPlacedStreak = player->m_justPlacedStreak;
    result.m_maybeLastGroundObject = player->m_maybeLastGroundObject;
    result.m_lastCollisionBottom = player->m_lastCollisionBottom;
    result.m_lastCollisionTop = player->m_lastCollisionTop;
    result.m_lastCollisionLeft = player->m_lastCollisionLeft;
    result.m_lastCollisionRight = player->m_lastCollisionRight;
    result.m_unk50C = player->m_unk50C;
    result.m_unk510 = player->m_unk510;
    result.m_currentSlope2 = player->m_currentSlope2;
    result.m_preLastGroundObject = player->m_preLastGroundObject;
    result.m_slopeAngle = player->m_slopeAngle;
    result.m_slopeSlidingMaybeRotated = player->m_slopeSlidingMaybeRotated;
    result.m_quickCheckpointMode = player->m_quickCheckpointMode;
    result.m_collidedObject = player->m_collidedObject;
    result.m_lastGroundObject = player->m_lastGroundObject;
    result.m_collidingWithLeft = player->m_collidingWithLeft;
    result.m_collidingWithRight = player->m_collidingWithRight;
    result.m_maybeSavedPlayerFrame = player->m_maybeSavedPlayerFrame;
    result.m_scaleXRelated2 = player->m_scaleXRelated2;
    result.m_groundYVelocity = player->m_groundYVelocity;
    result.m_yVelocityRelated = player->m_yVelocityRelated;
    result.m_scaleXRelated3 = player->m_scaleXRelated3;
    result.m_scaleXRelated4 = player->m_scaleXRelated4;
    result.m_scaleXRelated5 = player->m_scaleXRelated5;
    result.m_isCollidingWithSlope = player->m_isCollidingWithSlope;
    result.m_isBallRotating = player->m_isBallRotating;
    result.m_unk669 = player->m_unk669;
    result.m_currentSlope3 = player->m_currentSlope3;
    result.m_currentSlope = player->m_currentSlope;
    result.unk_584 = player->unk_584;
    result.m_collidingWithSlopeId = player->m_collidingWithSlopeId;
    result.m_slopeFlipGravityRelated = player->m_slopeFlipGravityRelated;
    result.m_slopeAngleRadians = player->m_slopeAngleRadians;
    result.m_rotateObjectsRelated = player->m_rotateObjectsRelated;
    result.m_maybeRotatedObjectsMap = player->m_maybeRotatedObjectsMap;
    result.m_rotation = player->getRotation();
    result.m_rotationSpeed = player->m_rotationSpeed;
    result.m_rotateSpeed = player->m_rotateSpeed;
    result.m_isRotating = player->m_isRotating;
    result.m_isBallRotating2 = player->m_isBallRotating2;
    result.m_hasGlow = player->m_hasGlow;
    result.m_isHidden = player->m_isHidden;
    result.m_ghostType = player->m_ghostType;
    result.m_shipStreak = player->m_shipStreak;
    result.m_speedMultiplier = player->m_speedMultiplier;
    result.m_yStart = player->m_yStart;
    result.m_gravity = player->m_gravity;
    result.m_trailingParticleLife = player->m_trailingParticleLife;
    result.m_unk648 = player->m_unk648;
    result.m_gameModeChangedTime = player->m_gameModeChangedTime;
    result.m_padRingRelated = player->m_padRingRelated;
    result.m_maybeReducedEffects = player->m_maybeReducedEffects;
    result.m_maybeIsFalling = player->m_maybeIsFalling;
    result.m_shouldTryPlacingCheckpoint = player->m_shouldTryPlacingCheckpoint;
    result.m_playEffects = player->m_playEffects;
    result.m_maybeCanRunIntoBlocks = player->m_maybeCanRunIntoBlocks;
    result.m_hasGroundParticles = player->m_hasGroundParticles;
    result.m_hasShipParticles = player->m_hasShipParticles;
    result.m_isOnGround3 = player->m_isOnGround3;
    result.m_checkpointTimeout = player->m_checkpointTimeout;
    result.m_lastCheckpointTime = player->m_lastCheckpointTime;
    result.m_lastJumpTime = player->m_lastJumpTime;
    result.m_lastFlipTime = player->m_lastFlipTime;
    result.m_flashTime = player->m_flashTime;
    result.m_flashRelated = player->m_flashRelated;
    result.m_flashRelated1 = player->m_flashRelated1;
    result.m_colorRelated2 = player->m_colorRelated2;
    result.m_flashRelated3 = player->m_flashRelated3;
    result.m_lastSpiderFlipTime = player->m_lastSpiderFlipTime;
    result.m_unkBool5 = player->m_unkBool5;
    result.m_maybeIsVehicleGlowing = player->m_maybeIsVehicleGlowing;
    result.m_gv0096 = player->m_gv0096;
    result.m_gv0100 = player->m_gv0100;
    result.m_accelerationOrSpeed = player->m_accelerationOrSpeed;
    result.m_snapDistance = player->m_snapDistance;
    result.m_ringJumpRelated = player->m_ringJumpRelated;
    result.m_ringRelatedSet = player->m_ringRelatedSet;
    result.m_objectSnappedTo = player->m_objectSnappedTo;
    result.m_pendingCheckpoint = player->m_pendingCheckpoint;
    result.m_onFlyCheckpointTries = player->m_onFlyCheckpointTries;
    result.m_maybeSpriteRelated = player->m_maybeSpriteRelated;
    result.m_useLandParticles0 = player->m_useLandParticles0;
    result.m_landParticlesAngle = player->m_landParticlesAngle;
    result.m_landParticleRelatedY = player->m_landParticleRelatedY;
    result.m_playerStreak = player->m_playerStreak;
    result.m_streakRelated1 = player->m_streakRelated1;
    result.m_streakRelated2 = player->m_streakRelated2;
    result.m_streakRelated3 = player->m_streakRelated3;
    result.m_shipStreakType = player->m_shipStreakType;
    result.m_slopeRotation = player->m_slopeRotation;
    result.m_currentSlopeYVelocity = player->m_currentSlopeYVelocity;
    result.m_unk3d0 = player->m_unk3d0;
    result.m_blackOrbRelated = player->m_blackOrbRelated;
    result.m_unk3e0 = player->m_unk3e0;
    result.m_unk3e1 = player->m_unk3e1;
    result.m_isAccelerating = player->m_isAccelerating;
    result.m_isCurrentSlopeTop = player->m_isCurrentSlopeTop;
    result.m_collidedTopMinY = player->m_collidedTopMinY;
    result.m_collidedBottomMaxY = player->m_collidedBottomMaxY;
    result.m_collidedLeftMaxX = player->m_collidedLeftMaxX;
    result.m_collidedRightMinX = player->m_collidedRightMinX;
    result.m_streakRelated4 = player->m_streakRelated4;
    // result.m_canPlaceCheckpoint = player->m_canPlaceCheckpoint;
    result.m_colorRelated = player->m_colorRelated;
    result.m_secondColorRelated = player->m_secondColorRelated;
    result.m_hasCustomGlowColor = player->m_hasCustomGlowColor;
    // result.m_glowColor = player->m_glowColor;
    result.m_maybeIsColliding = player->m_maybeIsColliding;
    // result.m_jumpBuffered = player->m_jumpBuffered;
    result.m_stateRingJump = player->m_stateRingJump;
    result.m_wasJumpBuffered = player->m_wasJumpBuffered;
    result.m_wasRobotJump = player->m_wasRobotJump;
    result.m_stateJumpBuffered = player->m_stateJumpBuffered;
    result.m_stateRingJump2 = player->m_stateRingJump2;
    result.m_touchedRing = player->m_touchedRing;
    result.m_touchedCustomRing = player->m_touchedCustomRing;
    result.m_touchedGravityPortal = player->m_touchedGravityPortal;
    result.m_maybeTouchedBreakableBlock = player->m_maybeTouchedBreakableBlock;
    result.m_jumpRelatedAC2 = player->m_jumpRelatedAC2;
    result.m_touchedPad = player->m_touchedPad;
    result.m_yVelocity = player->m_yVelocity;
    result.m_fallSpeed = player->m_fallSpeed;
    result.m_isOnSlope = player->m_isOnSlope;
    result.m_wasOnSlope = player->m_wasOnSlope;
    result.m_slopeVelocity = player->m_slopeVelocity;
    result.m_maybeUpsideDownSlope = player->m_maybeUpsideDownSlope;
    result.m_isShip = player->m_isShip;
    result.m_isBird = player->m_isBird;
    result.m_isBall = player->m_isBall;
    result.m_isDart = player->m_isDart;
    result.m_isRobot = player->m_isRobot;
    result.m_isSpider = player->m_isSpider;
    result.m_isUpsideDown = player->m_isUpsideDown;
    result.m_isDead = player->m_isDead;
    result.m_isOnGround = player->m_isOnGround;
    result.m_isGoingLeft = player->m_isGoingLeft;
    result.m_isSideways = player->m_isSideways;
    result.m_isSwing = player->m_isSwing;
    result.m_reverseRelated = player->m_reverseRelated;
    result.m_maybeReverseSpeed = player->m_maybeReverseSpeed;
    result.m_maybeReverseAcceleration = player->m_maybeReverseAcceleration;
    result.m_xVelocityRelated2 = player->m_xVelocityRelated2;
    // result.m_isDashing = player->m_isDashing;
    result.m_unk9e8 = player->m_unk9e8;
    result.m_groundObjectMaterial = player->m_groundObjectMaterial;
    result.m_vehicleSize = player->m_vehicleSize;
    result.m_playerSpeed = player->m_playerSpeed;
    result.m_shipRotation = player->m_shipRotation;
    result.m_lastPortalPos = player->m_lastPortalPos;
    result.m_unkUnused3 = player->m_unkUnused3;
    result.m_isOnGround2 = player->m_isOnGround2;
    result.m_lastLandTime = player->m_lastLandTime;
    result.m_platformerVelocityRelated = player->m_platformerVelocityRelated;
    result.m_maybeIsBoosted = player->m_maybeIsBoosted;
    result.m_scaleXRelatedTime = player->m_scaleXRelatedTime;
    result.m_decreaseBoostSlide = player->m_decreaseBoostSlide;
    result.m_unkA29 = player->m_unkA29;
    result.m_isLocked = player->m_isLocked;
    result.m_controlsDisabled = player->m_controlsDisabled;
    result.m_lastGroundedPos = player->m_lastGroundedPos;
    // result.m_touchingRings = player->m_touchingRings;
    for (int i = 0; i < player->m_touchingRings->count(); i++) {
        result.m_touchingRings.push_back(player->m_touchingRings->objectAtIndex(i));
    }

    result.m_touchedRings = player->m_touchedRings;
    result.m_lastActivatedPortal = player->m_lastActivatedPortal;
    result.m_hasEverJumped = player->m_hasEverJumped;
    result.m_ringOrStreakRelated = player->m_ringOrStreakRelated;
    result.m_playerColor1 = player->m_playerColor1;
    result.m_playerColor2 = player->m_playerColor2;
    result.m_position = player->m_position;
    result.m_isSecondPlayer = player->m_isSecondPlayer;
    result.m_unkA99 = player->m_unkA99;
    result.m_totalTime = player->m_totalTime;
    result.m_isBeingSpawnedByDualPortal = player->m_isBeingSpawnedByDualPortal;
    result.m_unkAAC = player->m_unkAAC;
    result.m_unkAngle1 = player->m_unkAngle1;
    result.m_yVelocityRelated3 = player->m_yVelocityRelated3;
    result.m_gamevar0060 = player->m_gamevar0060;
    result.m_swapColors = player->m_swapColors;
    result.m_gamevar0062 = player->m_gamevar0062;
    result.m_followRelated = player->m_followRelated;
    // result.m_playerFollowFloats = player->m_playerFollowFloats;
    result.m_unk838 = player->m_unk838;
    result.m_stateOnGround = player->m_stateOnGround;
    result.m_stateUnk = player->m_stateUnk;
    result.m_stateNoStickX = player->m_stateNoStickX;
    result.m_stateNoStickY = player->m_stateNoStickY;
    result.m_stateUnk2 = player->m_stateUnk2;
    result.m_stateBoostX = player->m_stateBoostX;
    result.m_stateBoostY = player->m_stateBoostY;
    result.m_maybeStateForce2 = player->m_maybeStateForce2;
    result.m_stateScale = player->m_stateScale;
    result.m_platformerXVelocity = player->m_platformerXVelocity;
    result.m_holdingRight = player->m_holdingRight;
    result.m_holdingLeft = player->m_holdingLeft;
    result.m_leftPressedFirst = player->m_leftPressedFirst;
    result.m_scaleXRelated = player->m_scaleXRelated;
    result.m_maybeHasStopped = player->m_maybeHasStopped;
    result.m_xVelocityRelated = player->m_xVelocityRelated;
    result.m_maybeGoingCorrectSlopeDirection = player->m_maybeGoingCorrectSlopeDirection;
    result.m_isSliding = player->m_isSliding;
    result.m_maybeSlopeForce = player->m_maybeSlopeForce;
    result.m_isOnIce = player->m_isOnIce;
    result.m_physDeltaRelated = player->m_physDeltaRelated;
    result.m_isOnGround4 = player->m_isOnGround4;
    result.m_maybeSlidingTime = player->m_maybeSlidingTime;
    result.m_maybeSlidingStartTime = player->m_maybeSlidingStartTime;
    result.m_changedDirectionsTime = player->m_changedDirectionsTime;
    result.m_slopeEndTime = player->m_slopeEndTime;
    result.m_isMoving = player->m_isMoving;
    result.m_platformerMovingLeft = player->m_platformerMovingLeft;
    result.m_platformerMovingRight = player->m_platformerMovingRight;
    result.m_isSlidingRight = player->m_isSlidingRight;
    result.m_maybeChangedDirectionAngle = player->m_maybeChangedDirectionAngle;
    result.m_unkUnused2 = player->m_unkUnused2;
    result.m_isPlatformer = player->m_isPlatformer;
    result.m_stateNoAutoJump = player->m_stateNoAutoJump;
    result.m_stateDartSlide = player->m_stateDartSlide;
    result.m_stateHitHead = player->m_stateHitHead;
    result.m_stateFlipGravity = player->m_stateFlipGravity;
    result.m_gravityMod = player->m_gravityMod;
    result.m_stateForce = player->m_stateForce;
    result.m_stateForceVector = player->m_stateForceVector;
    result.m_affectedByForces = player->m_affectedByForces;
    #ifdef GEODE_IS_WINDOWS //freeze on android :(
    result.m_jumpPadRelated = player->m_jumpPadRelated;
    #endif
    result.m_somethingPlayerSpeedTime = player->m_somethingPlayerSpeedTime;
    result.m_playerSpeedAC = player->m_playerSpeedAC;
    result.m_fixRobotJump = player->m_fixRobotJump;
    // result.m_holdingButtons = player->m_holdingButtons;
    result.m_inputsLocked = player->m_inputsLocked;
    result.m_currentRobotAnimation = player->m_currentRobotAnimation;
    result.m_gv0123 = player->m_gv0123;
    result.m_iconRequestID = player->m_iconRequestID;
    result.m_unkUnused = player->m_unkUnused;
    result.m_isOutOfBounds = player->m_isOutOfBounds;
    result.m_fallStartY = player->m_fallStartY;
    result.m_disablePlayerSqueeze = player->m_disablePlayerSqueeze;
    result.m_robotHasRun3 = player->m_robotHasRun3;
    result.m_robotHasRun2 = player->m_robotHasRun2;
    result.m_item20 = player->m_item20;
    // result.m_ignoreDamage = player->m_ignoreDamage;
    result.m_enable22Changes = player->m_enable22Changes;
    return result;
}

static void apply_checkpoint(PlayerObject* player, checkpoint_data checkpoint) {
    player->m_wasTeleported = checkpoint.m_wasTeleported;
    player->m_fixGravityBug = checkpoint.m_fixGravityBug;
    player->m_reverseSync = checkpoint.m_reverseSync;
    player->m_yVelocityBeforeSlope = checkpoint.m_yVelocityBeforeSlope;
    player->m_dashX = checkpoint.m_dashX;
    player->m_dashY = checkpoint.m_dashY;
    player->m_dashAngle = checkpoint.m_dashAngle;
    player->m_dashStartTime = checkpoint.m_dashStartTime;
    player->m_slopeStartTime = checkpoint.m_slopeStartTime;
    player->m_justPlacedStreak = checkpoint.m_justPlacedStreak;
    player->m_maybeLastGroundObject = checkpoint.m_maybeLastGroundObject;
    player->m_lastCollisionBottom = checkpoint.m_lastCollisionBottom;
    player->m_lastCollisionTop = checkpoint.m_lastCollisionTop;
    player->m_lastCollisionLeft = checkpoint.m_lastCollisionLeft;
    player->m_lastCollisionRight = checkpoint.m_lastCollisionRight;
    player->m_unk50C = checkpoint.m_unk50C;
    player->m_unk510 = checkpoint.m_unk510;
    player->m_currentSlope2 = checkpoint.m_currentSlope2;
    player->m_preLastGroundObject = checkpoint.m_preLastGroundObject;
    player->m_slopeAngle = checkpoint.m_slopeAngle;
    player->m_slopeSlidingMaybeRotated = checkpoint.m_slopeSlidingMaybeRotated;
    player->m_quickCheckpointMode = checkpoint.m_quickCheckpointMode;
    player->m_collidedObject = checkpoint.m_collidedObject;
    player->m_lastGroundObject = checkpoint.m_lastGroundObject;
    player->m_collidingWithLeft = checkpoint.m_collidingWithLeft;
    player->m_collidingWithRight = checkpoint.m_collidingWithRight;
    player->m_maybeSavedPlayerFrame = checkpoint.m_maybeSavedPlayerFrame;
    player->m_scaleXRelated2 = checkpoint.m_scaleXRelated2;
    player->m_groundYVelocity = checkpoint.m_groundYVelocity;
    player->m_yVelocityRelated = checkpoint.m_yVelocityRelated;
    player->m_scaleXRelated3 = checkpoint.m_scaleXRelated3;
    player->m_scaleXRelated4 = checkpoint.m_scaleXRelated4;
    player->m_scaleXRelated5 = checkpoint.m_scaleXRelated5;
    player->m_isCollidingWithSlope = checkpoint.m_isCollidingWithSlope;
    player->m_isBallRotating = checkpoint.m_isBallRotating;
    player->m_unk669 = checkpoint.m_unk669;
    player->m_currentSlope3 = checkpoint.m_currentSlope3;
    player->m_currentSlope = checkpoint.m_currentSlope;
    player->unk_584 = checkpoint.unk_584;
    player->m_collidingWithSlopeId = checkpoint.m_collidingWithSlopeId;
    player->m_slopeFlipGravityRelated = checkpoint.m_slopeFlipGravityRelated;
    player->m_slopeAngleRadians = checkpoint.m_slopeAngleRadians;
    player->m_rotateObjectsRelated = checkpoint.m_rotateObjectsRelated;
    player->m_maybeRotatedObjectsMap = checkpoint.m_maybeRotatedObjectsMap;
    player->setRotation(checkpoint.m_rotation);
    player->m_rotationSpeed = checkpoint.m_rotationSpeed;
    player->m_rotateSpeed = checkpoint.m_rotateSpeed;
    player->m_isRotating = checkpoint.m_isRotating;
    player->m_isBallRotating2 = checkpoint.m_isBallRotating2;
    player->m_hasGlow = checkpoint.m_hasGlow;
    player->m_isHidden = checkpoint.m_isHidden;
    player->m_ghostType = checkpoint.m_ghostType;
    player->m_shipStreak = checkpoint.m_shipStreak;
    player->m_speedMultiplier = checkpoint.m_speedMultiplier;
    player->m_yStart = checkpoint.m_yStart;
    player->m_gravity = checkpoint.m_gravity;
    player->m_trailingParticleLife = checkpoint.m_trailingParticleLife;
    player->m_unk648 = checkpoint.m_unk648;
    player->m_gameModeChangedTime = checkpoint.m_gameModeChangedTime;
    player->m_padRingRelated = checkpoint.m_padRingRelated;
    player->m_maybeReducedEffects = checkpoint.m_maybeReducedEffects;
    player->m_maybeIsFalling = checkpoint.m_maybeIsFalling;
    player->m_shouldTryPlacingCheckpoint = checkpoint.m_shouldTryPlacingCheckpoint;
    player->m_playEffects = checkpoint.m_playEffects;
    player->m_maybeCanRunIntoBlocks = checkpoint.m_maybeCanRunIntoBlocks;
    player->m_hasGroundParticles = checkpoint.m_hasGroundParticles;
    player->m_hasShipParticles = checkpoint.m_hasShipParticles;
    player->m_isOnGround3 = checkpoint.m_isOnGround3;
    player->m_checkpointTimeout = checkpoint.m_checkpointTimeout;
    player->m_lastCheckpointTime = checkpoint.m_lastCheckpointTime;
    player->m_lastJumpTime = checkpoint.m_lastJumpTime;
    player->m_lastFlipTime = checkpoint.m_lastFlipTime;
    player->m_flashTime = checkpoint.m_flashTime;
    player->m_flashRelated = checkpoint.m_flashRelated;
    player->m_flashRelated1 = checkpoint.m_flashRelated1;
    player->m_colorRelated2 = checkpoint.m_colorRelated2;
    player->m_flashRelated3 = checkpoint.m_flashRelated3;
    player->m_lastSpiderFlipTime = checkpoint.m_lastSpiderFlipTime;
    player->m_unkBool5 = checkpoint.m_unkBool5;
    player->m_maybeIsVehicleGlowing = checkpoint.m_maybeIsVehicleGlowing;
    player->m_gv0096 = checkpoint.m_gv0096;
    player->m_gv0100 = checkpoint.m_gv0100;
    player->m_accelerationOrSpeed = checkpoint.m_accelerationOrSpeed;
    player->m_snapDistance = checkpoint.m_snapDistance;
    player->m_ringJumpRelated = checkpoint.m_ringJumpRelated;
    player->m_ringRelatedSet = checkpoint.m_ringRelatedSet;
    player->m_objectSnappedTo = checkpoint.m_objectSnappedTo;
    player->m_pendingCheckpoint = checkpoint.m_pendingCheckpoint;
    player->m_onFlyCheckpointTries = checkpoint.m_onFlyCheckpointTries;
    player->m_maybeSpriteRelated = checkpoint.m_maybeSpriteRelated;
    player->m_useLandParticles0 = checkpoint.m_useLandParticles0;
    player->m_landParticlesAngle = checkpoint.m_landParticlesAngle;
    player->m_landParticleRelatedY = checkpoint.m_landParticleRelatedY;
    player->m_playerStreak = checkpoint.m_playerStreak;
    player->m_streakRelated1 = checkpoint.m_streakRelated1;
    player->m_streakRelated2 = checkpoint.m_streakRelated2;
    player->m_streakRelated3 = checkpoint.m_streakRelated3;
    player->m_shipStreakType = checkpoint.m_shipStreakType;
    player->m_slopeRotation = checkpoint.m_slopeRotation;
    player->m_currentSlopeYVelocity = checkpoint.m_currentSlopeYVelocity;
    player->m_unk3d0 = checkpoint.m_unk3d0;
    player->m_blackOrbRelated = checkpoint.m_blackOrbRelated;
    player->m_unk3e0 = checkpoint.m_unk3e0;
    player->m_unk3e1 = checkpoint.m_unk3e1;
    player->m_isAccelerating = checkpoint.m_isAccelerating;
    player->m_isCurrentSlopeTop = checkpoint.m_isCurrentSlopeTop;
    player->m_collidedTopMinY = checkpoint.m_collidedTopMinY;
    player->m_collidedBottomMaxY = checkpoint.m_collidedBottomMaxY;
    player->m_collidedLeftMaxX = checkpoint.m_collidedLeftMaxX;
    player->m_collidedRightMinX = checkpoint.m_collidedRightMinX;
    player->m_streakRelated4 = checkpoint.m_streakRelated4;
    // player->m_canPlaceCheckpoint = checkpoint.m_canPlaceCheckpoint;
    player->m_colorRelated = checkpoint.m_colorRelated;
    player->m_secondColorRelated = checkpoint.m_secondColorRelated;
    player->m_hasCustomGlowColor = checkpoint.m_hasCustomGlowColor;
    // player->m_glowColor = checkpoint.m_glowColor;
    player->m_maybeIsColliding = checkpoint.m_maybeIsColliding;
    // player->m_jumpBuffered = checkpoint.m_jumpBuffered;
    player->m_stateRingJump = checkpoint.m_stateRingJump;
    player->m_wasJumpBuffered = checkpoint.m_wasJumpBuffered;
    player->m_wasRobotJump = checkpoint.m_wasRobotJump;
    player->m_stateJumpBuffered = checkpoint.m_stateJumpBuffered;
    player->m_stateRingJump2 = checkpoint.m_stateRingJump2;
    player->m_touchedRing = checkpoint.m_touchedRing;
    player->m_touchedCustomRing = checkpoint.m_touchedCustomRing;
    player->m_touchedGravityPortal = checkpoint.m_touchedGravityPortal;
    player->m_maybeTouchedBreakableBlock = checkpoint.m_maybeTouchedBreakableBlock;
    player->m_jumpRelatedAC2 = checkpoint.m_jumpRelatedAC2;
    player->m_touchedPad = checkpoint.m_touchedPad;
    player->m_yVelocity = checkpoint.m_yVelocity;
    player->m_fallSpeed = checkpoint.m_fallSpeed;
    player->m_isOnSlope = checkpoint.m_isOnSlope;
    player->m_wasOnSlope = checkpoint.m_wasOnSlope;
    player->m_slopeVelocity = checkpoint.m_slopeVelocity;
    player->m_maybeUpsideDownSlope = checkpoint.m_maybeUpsideDownSlope;
    player->m_isShip = checkpoint.m_isShip;
    player->m_isBird = checkpoint.m_isBird;
    player->m_isBall = checkpoint.m_isBall;
    player->m_isDart = checkpoint.m_isDart;
    player->m_isRobot = checkpoint.m_isRobot;
    player->m_isSpider = checkpoint.m_isSpider;
    player->m_isUpsideDown = checkpoint.m_isUpsideDown;
    player->m_isDead = checkpoint.m_isDead;
    player->m_isOnGround = checkpoint.m_isOnGround;
    player->m_isGoingLeft = checkpoint.m_isGoingLeft;
    player->m_isSideways = checkpoint.m_isSideways;
    player->m_isSwing = checkpoint.m_isSwing;
    player->m_reverseRelated = checkpoint.m_reverseRelated;
    player->m_maybeReverseSpeed = checkpoint.m_maybeReverseSpeed;
    player->m_maybeReverseAcceleration = checkpoint.m_maybeReverseAcceleration;
    player->m_xVelocityRelated2 = checkpoint.m_xVelocityRelated2;
    // player->m_isDashing = checkpoint.m_isDashing;
    player->m_unk9e8 = checkpoint.m_unk9e8;
    player->m_groundObjectMaterial = checkpoint.m_groundObjectMaterial;
    player->m_vehicleSize = checkpoint.m_vehicleSize;
    player->m_playerSpeed = checkpoint.m_playerSpeed;
    player->m_shipRotation = checkpoint.m_shipRotation;
    player->m_lastPortalPos = checkpoint.m_lastPortalPos;
    player->m_unkUnused3 = checkpoint.m_unkUnused3;
    player->m_isOnGround2 = checkpoint.m_isOnGround2;
    player->m_lastLandTime = checkpoint.m_lastLandTime;
    player->m_platformerVelocityRelated = checkpoint.m_platformerVelocityRelated;
    player->m_maybeIsBoosted = checkpoint.m_maybeIsBoosted;
    player->m_scaleXRelatedTime = checkpoint.m_scaleXRelatedTime;
    player->m_decreaseBoostSlide = checkpoint.m_decreaseBoostSlide;
    player->m_unkA29 = checkpoint.m_unkA29;
    player->m_isLocked = checkpoint.m_isLocked;
    player->m_controlsDisabled = checkpoint.m_controlsDisabled;
    player->m_lastGroundedPos = checkpoint.m_lastGroundedPos;
    // player->m_touchingRings = checkpoint.m_touchingRings;
    player->m_touchingRings->removeAllObjects();

    for (auto* obj : checkpoint.m_touchingRings) {
        player->m_touchingRings->addObject(obj);
    }
        

    player->m_touchedRings = checkpoint.m_touchedRings;
    player->m_lastActivatedPortal = checkpoint.m_lastActivatedPortal;
    player->m_hasEverJumped = checkpoint.m_hasEverJumped;
    player->m_ringOrStreakRelated = checkpoint.m_ringOrStreakRelated;
    player->m_playerColor1 = checkpoint.m_playerColor1;
    player->m_playerColor2 = checkpoint.m_playerColor2;
    player->m_position = checkpoint.m_position;
    player->m_isSecondPlayer = checkpoint.m_isSecondPlayer;
    player->m_unkA99 = checkpoint.m_unkA99;
    player->m_totalTime = checkpoint.m_totalTime;
    player->m_isBeingSpawnedByDualPortal = checkpoint.m_isBeingSpawnedByDualPortal;
    player->m_unkAAC = checkpoint.m_unkAAC;
    player->m_unkAngle1 = checkpoint.m_unkAngle1;
    player->m_yVelocityRelated3 = checkpoint.m_yVelocityRelated3;
    player->m_gamevar0060 = checkpoint.m_gamevar0060;
    player->m_swapColors = checkpoint.m_swapColors;
    player->m_gamevar0062 = checkpoint.m_gamevar0062;
    player->m_followRelated = checkpoint.m_followRelated;
    // player->m_playerFollowFloats = checkpoint.m_playerFollowFloats;
    player->m_unk838 = checkpoint.m_unk838;
    player->m_stateOnGround = checkpoint.m_stateOnGround;
    player->m_stateUnk = checkpoint.m_stateUnk;
    player->m_stateNoStickX = checkpoint.m_stateNoStickX;
    player->m_stateNoStickY = checkpoint.m_stateNoStickY;
    player->m_stateUnk2 = checkpoint.m_stateUnk2;
    player->m_stateBoostX = checkpoint.m_stateBoostX;
    player->m_stateBoostY = checkpoint.m_stateBoostY;
    player->m_maybeStateForce2 = checkpoint.m_maybeStateForce2;
    player->m_stateScale = checkpoint.m_stateScale;
    player->m_platformerXVelocity = checkpoint.m_platformerXVelocity;
    player->m_holdingRight = checkpoint.m_holdingRight;
    player->m_holdingLeft = checkpoint.m_holdingLeft;
    player->m_leftPressedFirst = checkpoint.m_leftPressedFirst;
    player->m_scaleXRelated = checkpoint.m_scaleXRelated;
    player->m_maybeHasStopped = checkpoint.m_maybeHasStopped;
    player->m_xVelocityRelated = checkpoint.m_xVelocityRelated;
    player->m_maybeGoingCorrectSlopeDirection = checkpoint.m_maybeGoingCorrectSlopeDirection;
    player->m_isSliding = checkpoint.m_isSliding;
    player->m_maybeSlopeForce = checkpoint.m_maybeSlopeForce;
    player->m_isOnIce = checkpoint.m_isOnIce;
    player->m_physDeltaRelated = checkpoint.m_physDeltaRelated;
    player->m_isOnGround4 = checkpoint.m_isOnGround4;
    player->m_maybeSlidingTime = checkpoint.m_maybeSlidingTime;
    player->m_maybeSlidingStartTime = checkpoint.m_maybeSlidingStartTime;
    player->m_changedDirectionsTime = checkpoint.m_changedDirectionsTime;
    player->m_slopeEndTime = checkpoint.m_slopeEndTime;
    player->m_isMoving = checkpoint.m_isMoving;
    player->m_platformerMovingLeft = checkpoint.m_platformerMovingLeft;
    player->m_platformerMovingRight = checkpoint.m_platformerMovingRight;
    player->m_isSlidingRight = checkpoint.m_isSlidingRight;
    player->m_maybeChangedDirectionAngle = checkpoint.m_maybeChangedDirectionAngle;
    player->m_unkUnused2 = checkpoint.m_unkUnused2;
    player->m_isPlatformer = checkpoint.m_isPlatformer;
    player->m_stateNoAutoJump = checkpoint.m_stateNoAutoJump;
    player->m_stateDartSlide = checkpoint.m_stateDartSlide;
    player->m_stateHitHead = checkpoint.m_stateHitHead;
    player->m_stateFlipGravity = checkpoint.m_stateFlipGravity;
    player->m_gravityMod = checkpoint.m_gravityMod;
    player->m_stateForce = checkpoint.m_stateForce;
    player->m_stateForceVector = checkpoint.m_stateForceVector;
    player->m_affectedByForces = checkpoint.m_affectedByForces;
    #ifdef GEODE_IS_WINDOWS //freeze on android :(
    player->m_jumpPadRelated = checkpoint.m_jumpPadRelated;
    #endif
    player->m_somethingPlayerSpeedTime = checkpoint.m_somethingPlayerSpeedTime;
    player->m_playerSpeedAC = checkpoint.m_playerSpeedAC;
    player->m_fixRobotJump = checkpoint.m_fixRobotJump;
    // player->m_holdingButtons = checkpoint.m_holdingButtons;
    player->m_inputsLocked = checkpoint.m_inputsLocked;
    player->m_currentRobotAnimation = checkpoint.m_currentRobotAnimation;
    player->m_gv0123 = checkpoint.m_gv0123;
    player->m_iconRequestID = checkpoint.m_iconRequestID;
    player->m_unkUnused = checkpoint.m_unkUnused;
    player->m_isOutOfBounds = checkpoint.m_isOutOfBounds;
    player->m_fallStartY = checkpoint.m_fallStartY;
    player->m_disablePlayerSqueeze = checkpoint.m_disablePlayerSqueeze;
    player->m_robotHasRun3 = checkpoint.m_robotHasRun3;
    player->m_robotHasRun2 = checkpoint.m_robotHasRun2;
    player->m_item20 = checkpoint.m_item20;
    // player->m_ignoreDamage = checkpoint.m_ignoreDamage;
    player->m_enable22Changes = checkpoint.m_enable22Changes;
}